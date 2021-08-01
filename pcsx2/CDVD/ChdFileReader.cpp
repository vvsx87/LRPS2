#include "PrecompiledHeader.h"
#include "ChdFileReader.h"

#include "CDVD/CompressedFileReaderUtils.h"

#include <wx/dir.h>


bool ChdFileReader::CanHandle(const wxString &fileName)
{
    if (!wxFileName::FileExists(fileName) || !fileName.Lower().EndsWith(L".chd")) {
        return false;
    }
    return true;
}

bool ChdFileReader::Open(const wxString &fileName)
{
	  m_filename = fileName;

    chd_file *child = NULL;
    chd_file *parent = NULL;
    chd_header *header = new chd_header;
    chd_header *parent_header = new chd_header;

    wxString chds[8];
    chds[0] = fileName;
    int chd_depth = 0;
    chd_error error;

    do {
      // log_cb(RETRO_LOG_ERROR, "chd_open checking: %s\n", static_cast<const char*>(chds[chd_depth]));
      error = chd_open(static_cast<const char*>(chds[chd_depth]), CHD_OPEN_READ, NULL, &child);
      if (error == CHDERR_REQUIRES_PARENT) {
        if (chd_read_header(static_cast<const char*>(chds[chd_depth]), header) != CHDERR_NONE) {
          log_cb(RETRO_LOG_ERROR, "chd_open chd_read_header error: %s: %s\n", chd_error_string(error), static_cast<const char*>(chds[chd_depth]));
          delete header;
          delete parent_header;
          return false;
        }
        bool found_parent = false;
        wxFileName wxfilename(chds[chd_depth]);
        wxString dir_path = wxfilename.GetPath();
        wxDir dir(dir_path);
        if (dir.IsOpened()) {
          wxString parent_fileName;
		  bool cont = dir.GetFirst(&parent_fileName, wxString("*.") + wxfilename.GetExt(), wxDIR_FILES | wxDIR_HIDDEN);
          while ( cont ) {
            parent_fileName = wxFileName(dir_path, parent_fileName).GetFullPath();
            if (chd_read_header(static_cast<const char*>(parent_fileName), parent_header) == CHDERR_NONE &&
                memcmp(parent_header->sha1, header->parentsha1, sizeof(parent_header->sha1)) == 0) {
              found_parent = true;
              chds[++chd_depth] = wxString(parent_fileName);
              break;
            }
            cont = dir.GetNext(&parent_fileName);
          }
        }
        if (!found_parent) {
		      log_cb(RETRO_LOG_ERROR, "chd_open no parent for: %s\n", static_cast<const char*>(chds[chd_depth]));
          break;
        }
      }
    } while(error == CHDERR_REQUIRES_PARENT);
    delete parent_header;

    if (error != CHDERR_NONE) {
		    log_cb(RETRO_LOG_ERROR, "chd_open return error: %s\n", chd_error_string(error));
        delete header;
        return false;
    }

		// log_cb(RETRO_LOG_INFO, "chd_opened parent: %d %s\n", chd_depth, static_cast<const char*>(chds[chd_depth]));
    for (int d = chd_depth-1; d >= 0; d--) {
      // parent = child;
      // child = (chd_file**)malloc(sizeof(chd_file*));
      parent = child;
      child = NULL;
      // log_cb(RETRO_LOG_ERROR, "chd_open opening chd: %d %s\n", d, static_cast<const char*>(chds[d]));
      error = chd_open(static_cast<const char*>(chds[d]), CHD_OPEN_READ, parent, &child);
      if (error != CHDERR_NONE) {
		    log_cb(RETRO_LOG_ERROR, "chd_open return error: %s\n", chd_error_string(error));
        delete header;
        return false;
      }
    }
    ChdFile = child;
    if (chd_read_header(static_cast<const char*>(chds[0]), header) != CHDERR_NONE) {
      log_cb(RETRO_LOG_ERROR, "chd_open chd_read_header error: %s: %s\n", chd_error_string(error), static_cast<const char*>(chds[0]));
      delete header;
      return false;
    }

    // const chd_header *header = chd_get_header(ChdFile);
    sector_size = header->unitbytes;
    sector_count = header->unitcount;
    sectors_per_hunk = header->hunkbytes / sector_size;
    hunk_buffer = new u8[header->hunkbytes];
    current_hunk = -1;

    delete header;
    return true;
}

int ChdFileReader::ReadSync(void *pBuffer, uint sector, uint count)
{
    u8 *dst = (u8 *) pBuffer;
    u32 hunk = sector / sectors_per_hunk;
    u32 sector_in_hunk = sector % sectors_per_hunk;
    chd_error error;

    for (uint i = 0; i < count; i++) {
      if (current_hunk != hunk) {
        error = chd_read(ChdFile, hunk, hunk_buffer);
        if (error != CHDERR_NONE) {
            log_cb(RETRO_LOG_ERROR, "chd_read return error: %s\n", chd_error_string(error));
            // return i * m_blocksize;
        }
        current_hunk = hunk;
      }
      memcpy(dst + i * m_blocksize, hunk_buffer + sector_in_hunk * sector_size, m_blocksize);
      sector_in_hunk++;
      if (sector_in_hunk >= sectors_per_hunk) {
        hunk++;
        sector_in_hunk = 0;
      }
    }
    return m_blocksize * count;
}

void ChdFileReader::BeginRead(void *pBuffer, uint sector, uint count)
{
  // TODO: Check if libchdr can read asynchronously
  async_read = ReadSync(pBuffer, sector, count);
}

int ChdFileReader::FinishRead()
{
	return async_read;
}

void ChdFileReader::Close()
{
    if (hunk_buffer != NULL) {
      //free(hunk_buffer);
      delete[] hunk_buffer;
      hunk_buffer = NULL;
    }
    if (ChdFile != NULL) {
      chd_close(ChdFile);
      ChdFile = NULL;
    }
}

uint ChdFileReader::GetBlockSize() const
{
    return m_blocksize;
}

void ChdFileReader::SetBlockSize(uint blocksize)
{
    m_blocksize = blocksize;
}

u32 ChdFileReader::GetBlockCount() const
{
    return sector_count;
}
ChdFileReader::ChdFileReader(void)
{
  ChdFile = NULL;
  hunk_buffer = NULL;
};

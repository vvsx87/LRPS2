/*  PCSX2 - PS2 Emulator for PCs
*  Copyright (C) 2002-2014  PCSX2 Dev Team
*
*  PCSX2 is free software: you can redistribute it and/or modify it under the terms
*  of the GNU Lesser General Public License as published by the Free Software Found-
*  ation, either version 3 of the License, or (at your option) any later version.
*
*  PCSX2 is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
*  without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
*  PURPOSE.  See the GNU General Public License for more details.
*
*  You should have received a copy of the GNU General Public License along with PCSX2.
*  If not, see <http://www.gnu.org/licenses/>.
*/

#include "AsyncFileReader.h"
#include "CompressedFileReader.h"
#include "ChdFileReader.h"
#include "CsoFileReader.h"
#include "GzippedFileReader.h"

// CompressedFileReader factory.
AsyncFileReader* CompressedFileReader::GetNewReader(const wxString& fileName)
{
	if (ChdFileReader::CanHandle(fileName))
		return new ChdFileReader();
	if (GzippedFileReader::CanHandle(fileName))
		return new GzippedFileReader();
	if (CsoFileReader::CanHandle(fileName))
		return new CsoFileReader();
	// This is the one which will fail on open.
	return NULL;
}

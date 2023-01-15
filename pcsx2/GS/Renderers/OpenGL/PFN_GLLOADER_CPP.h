/*
 *  Copyright (C) 2019 PCSX2 Dev Team
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with GNU Make; see the file COPYING.  If not, write to
 *  the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA USA.
 *  http://www.gnu.org/copyleft/gpl.html
 *
 *  This file was generated by gen_gl_func_ptr.pl
 *
 */

#if defined(ENABLE_GL_ARB_bindless_texture) && defined(GL_ARB_bindless_texture)
PFNGLGETTEXTURESAMPLERHANDLEARBPROC glGetTextureSamplerHandleARB = NULL;
PFNGLMAKETEXTUREHANDLERESIDENTARBPROC glMakeTextureHandleResidentARB = NULL;
PFNGLMAKETEXTUREHANDLENONRESIDENTARBPROC glMakeTextureHandleNonResidentARB = NULL;
PFNGLGETIMAGEHANDLEARBPROC glGetImageHandleARB = NULL;
PFNGLMAKEIMAGEHANDLERESIDENTARBPROC glMakeImageHandleResidentARB = NULL;
PFNGLMAKEIMAGEHANDLENONRESIDENTARBPROC glMakeImageHandleNonResidentARB = NULL;
PFNGLISTEXTUREHANDLERESIDENTARBPROC glIsTextureHandleResidentARB = NULL;
PFNGLISIMAGEHANDLERESIDENTARBPROC glIsImageHandleResidentARB = NULL;
PFNGLVERTEXATTRIBL1UI64ARBPROC glVertexAttribL1ui64ARB = NULL;
PFNGLVERTEXATTRIBL1UI64VARBPROC glVertexAttribL1ui64vARB = NULL;
PFNGLGETVERTEXATTRIBLUI64VARBPROC glGetVertexAttribLui64vARB = NULL;
#endif
#if defined(ENABLE_GL_ARB_cl_event) && defined(GL_ARB_cl_event)
PFNGLCREATESYNCFROMCLEVENTARBPROC glCreateSyncFromCLeventARB = NULL;
#endif
#if defined(ENABLE_GL_ARB_compute_variable_group_size) && defined(GL_ARB_compute_variable_group_size)
PFNGLDISPATCHCOMPUTEGROUPSIZEARBPROC glDispatchComputeGroupSizeARB = NULL;
#endif
#if defined(ENABLE_GL_ARB_debug_output) && defined(GL_ARB_debug_output)
PFNGLDEBUGMESSAGECONTROLARBPROC glDebugMessageControlARB = NULL;
PFNGLDEBUGMESSAGEINSERTARBPROC glDebugMessageInsertARB = NULL;
PFNGLDEBUGMESSAGECALLBACKARBPROC glDebugMessageCallbackARB = NULL;
PFNGLGETDEBUGMESSAGELOGARBPROC glGetDebugMessageLogARB = NULL;
#endif
#if defined(ENABLE_GL_ARB_draw_buffers_blend) && defined(GL_ARB_draw_buffers_blend)
PFNGLBLENDEQUATIONSEPARATEIARBPROC glBlendEquationSeparateiARB = NULL;
PFNGLBLENDFUNCIARBPROC glBlendFunciARB = NULL;
PFNGLBLENDFUNCSEPARATEIARBPROC glBlendFuncSeparateiARB = NULL;
#endif
#if defined(ENABLE_GL_ARB_draw_instanced) && defined(GL_ARB_draw_instanced)
PFNGLDRAWARRAYSINSTANCEDARBPROC glDrawArraysInstancedARB = NULL;
PFNGLDRAWELEMENTSINSTANCEDARBPROC glDrawElementsInstancedARB = NULL;
#endif
#if defined(ENABLE_GL_ARB_geometry_shader4) && defined(GL_ARB_geometry_shader4)
PFNGLFRAMEBUFFERTEXTUREARBPROC glFramebufferTextureARB = NULL;
PFNGLFRAMEBUFFERTEXTURELAYERARBPROC glFramebufferTextureLayerARB = NULL;
PFNGLFRAMEBUFFERTEXTUREFACEARBPROC glFramebufferTextureFaceARB = NULL;
#endif
#if defined(ENABLE_GL_ARB_gl_spirv) && defined(GL_ARB_gl_spirv)
PFNGLSPECIALIZESHADERARBPROC glSpecializeShaderARB = NULL;
#endif
#if defined(ENABLE_GL_ARB_indirect_parameters) && defined(GL_ARB_indirect_parameters)
PFNGLMULTIDRAWARRAYSINDIRECTCOUNTARBPROC glMultiDrawArraysIndirectCountARB = NULL;
PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTARBPROC glMultiDrawElementsIndirectCountARB = NULL;
#endif
#if defined(ENABLE_GL_ARB_instanced_arrays) && defined(GL_ARB_instanced_arrays)
PFNGLVERTEXATTRIBDIVISORARBPROC glVertexAttribDivisorARB = NULL;
#endif
#if defined(ENABLE_GL_ARB_parallel_shader_compile) && defined(GL_ARB_parallel_shader_compile)
PFNGLMAXSHADERCOMPILERTHREADSARBPROC glMaxShaderCompilerThreadsARB = NULL;
#endif
#if defined(ENABLE_GL_ARB_robustness) && defined(GL_ARB_robustness)
PFNGLGETGRAPHICSRESETSTATUSARBPROC glGetGraphicsResetStatusARB = NULL;
#endif
#if defined(ENABLE_GL_ARB_sample_locations) && defined(GL_ARB_sample_locations)
PFNGLFRAMEBUFFERSAMPLELOCATIONSFVARBPROC glFramebufferSampleLocationsfvARB = NULL;
PFNGLEVALUATEDEPTHVALUESARBPROC glEvaluateDepthValuesARB = NULL;
#endif
#if defined(ENABLE_GL_ARB_sample_shading) && defined(GL_ARB_sample_shading)
PFNGLMINSAMPLESHADINGARBPROC glMinSampleShadingARB = NULL;
#endif
#if defined(ENABLE_GL_ARB_shading_language_include) && defined(GL_ARB_shading_language_include)
PFNGLDELETENAMEDSTRINGARBPROC glDeleteNamedStringARB = NULL;
PFNGLCOMPILESHADERINCLUDEARBPROC glCompileShaderIncludeARB = NULL;
PFNGLISNAMEDSTRINGARBPROC glIsNamedStringARB = NULL;
PFNGLGETNAMEDSTRINGARBPROC glGetNamedStringARB = NULL;
PFNGLGETNAMEDSTRINGIVARBPROC glGetNamedStringivARB = NULL;
#endif
#if defined(ENABLE_GL_ARB_texture_buffer_object) && defined(GL_ARB_texture_buffer_object)
PFNGLTEXBUFFERARBPROC glTexBufferARB = NULL;
#endif
#if defined(ENABLE_GL_KHR_blend_equation_advanced) && defined(GL_KHR_blend_equation_advanced)
PFNGLBLENDBARRIERKHRPROC glBlendBarrierKHR = NULL;
#endif
#if defined(ENABLE_GL_KHR_parallel_shader_compile) && defined(GL_KHR_parallel_shader_compile)
PFNGLMAXSHADERCOMPILERTHREADSKHRPROC glMaxShaderCompilerThreadsKHR = NULL;
#endif
#if defined(ENABLE_GL_VERSION_1_0) && defined(GL_VERSION_1_0)
PFNGLPOLYGONMODEPROC glPolygonMode = NULL;
PFNGLSCISSORPROC glScissor = NULL;
PFNGLTEXPARAMETERFPROC glTexParameterf = NULL;
PFNGLTEXPARAMETERFVPROC glTexParameterfv = NULL;
PFNGLTEXPARAMETERIPROC glTexParameteri = NULL;
PFNGLTEXPARAMETERIVPROC glTexParameteriv = NULL;
PFNGLTEXIMAGE1DPROC glTexImage1D = NULL;
PFNGLTEXIMAGE2DPROC glTexImage2D = NULL;
PFNGLDRAWBUFFERPROC glDrawBuffer = NULL;
PFNGLCLEARPROC glClear = NULL;
PFNGLCLEARCOLORPROC glClearColor = NULL;
PFNGLCLEARSTENCILPROC glClearStencil = NULL;
PFNGLCLEARDEPTHPROC glClearDepth = NULL;
PFNGLSTENCILMASKPROC glStencilMask = NULL;
PFNGLCOLORMASKPROC glColorMask = NULL;
PFNGLDEPTHMASKPROC glDepthMask = NULL;
PFNGLDISABLEPROC glDisable = NULL;
PFNGLENABLEPROC glEnable = NULL;
PFNGLBLENDFUNCPROC glBlendFunc = NULL;
PFNGLSTENCILFUNCPROC glStencilFunc = NULL;
PFNGLSTENCILOPPROC glStencilOp = NULL;
PFNGLDEPTHFUNCPROC glDepthFunc = NULL;
PFNGLPIXELSTOREIPROC glPixelStorei = NULL;
PFNGLREADBUFFERPROC glReadBuffer = NULL;
PFNGLREADPIXELSPROC glReadPixels = NULL;
PFNGLGETERRORPROC glGetError = NULL;
PFNGLGETINTEGERVPROC glGetIntegerv = NULL;
PFNGLGETSTRINGPROC glGetString = NULL;
PFNGLGETTEXIMAGEPROC glGetTexImage = NULL;
PFNGLGETTEXPARAMETERFVPROC glGetTexParameterfv = NULL;
PFNGLGETTEXPARAMETERIVPROC glGetTexParameteriv = NULL;
PFNGLGETTEXLEVELPARAMETERFVPROC glGetTexLevelParameterfv = NULL;
PFNGLGETTEXLEVELPARAMETERIVPROC glGetTexLevelParameteriv = NULL;
PFNGLISENABLEDPROC glIsEnabled = NULL;
PFNGLDEPTHRANGEPROC glDepthRange = NULL;
PFNGLVIEWPORTPROC glViewport = NULL;
#endif
#if defined(ENABLE_GL_VERSION_1_1) && defined(GL_VERSION_1_1)
PFNGLDRAWARRAYSPROC glDrawArrays = NULL;
PFNGLDRAWELEMENTSPROC glDrawElements = NULL;
PFNGLGETPOINTERVPROC glGetPointerv = NULL;
PFNGLPOLYGONOFFSETPROC glPolygonOffset = NULL;
PFNGLCOPYTEXIMAGE1DPROC glCopyTexImage1D = NULL;
PFNGLCOPYTEXIMAGE2DPROC glCopyTexImage2D = NULL;
PFNGLCOPYTEXSUBIMAGE1DPROC glCopyTexSubImage1D = NULL;
PFNGLCOPYTEXSUBIMAGE2DPROC glCopyTexSubImage2D = NULL;
PFNGLTEXSUBIMAGE1DPROC glTexSubImage1D = NULL;
PFNGLTEXSUBIMAGE2DPROC glTexSubImage2D = NULL;
PFNGLBINDTEXTUREPROC glBindTexture = NULL;
PFNGLDELETETEXTURESPROC glDeleteTextures = NULL;
PFNGLGENTEXTURESPROC glGenTextures = NULL;
PFNGLISTEXTUREPROC glIsTexture = NULL;
#endif
#if defined(ENABLE_GL_VERSION_1_2) && defined(GL_VERSION_1_2)
PFNGLDRAWRANGEELEMENTSPROC glDrawRangeElements = NULL;
PFNGLTEXIMAGE3DPROC glTexImage3D = NULL;
PFNGLTEXSUBIMAGE3DPROC glTexSubImage3D = NULL;
PFNGLCOPYTEXSUBIMAGE3DPROC glCopyTexSubImage3D = NULL;
#endif
#if defined(ENABLE_GL_VERSION_1_3) && defined(GL_VERSION_1_3)
PFNGLACTIVETEXTUREPROC glActiveTexture = NULL;
PFNGLSAMPLECOVERAGEPROC glSampleCoverage = NULL;
PFNGLCOMPRESSEDTEXIMAGE3DPROC glCompressedTexImage3D = NULL;
PFNGLCOMPRESSEDTEXIMAGE2DPROC glCompressedTexImage2D = NULL;
PFNGLCOMPRESSEDTEXIMAGE1DPROC glCompressedTexImage1D = NULL;
PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC glCompressedTexSubImage3D = NULL;
PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC glCompressedTexSubImage2D = NULL;
PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC glCompressedTexSubImage1D = NULL;
PFNGLGETCOMPRESSEDTEXIMAGEPROC glGetCompressedTexImage = NULL;
#endif
#if defined(ENABLE_GL_VERSION_1_4) && defined(GL_VERSION_1_4)
PFNGLBLENDFUNCSEPARATEPROC glBlendFuncSeparate = NULL;
PFNGLMULTIDRAWARRAYSPROC glMultiDrawArrays = NULL;
PFNGLMULTIDRAWELEMENTSPROC glMultiDrawElements = NULL;
PFNGLPOINTPARAMETERFPROC glPointParameterf = NULL;
PFNGLPOINTPARAMETERFVPROC glPointParameterfv = NULL;
PFNGLPOINTPARAMETERIPROC glPointParameteri = NULL;
PFNGLPOINTPARAMETERIVPROC glPointParameteriv = NULL;
PFNGLBLENDCOLORPROC glBlendColor = NULL;
#endif
#if defined(ENABLE_GL_VERSION_1_5) && defined(GL_VERSION_1_5)
PFNGLGENQUERIESPROC glGenQueries = NULL;
PFNGLDELETEQUERIESPROC glDeleteQueries = NULL;
PFNGLISQUERYPROC glIsQuery = NULL;
PFNGLBINDBUFFERPROC glBindBuffer = NULL;
PFNGLDELETEBUFFERSPROC glDeleteBuffers = NULL;
PFNGLGENBUFFERSPROC glGenBuffers = NULL;
PFNGLISBUFFERPROC glIsBuffer = NULL;
PFNGLBUFFERDATAPROC glBufferData = NULL;
PFNGLBUFFERSUBDATAPROC glBufferSubData = NULL;
PFNGLGETBUFFERSUBDATAPROC glGetBufferSubData = NULL;
PFNGLMAPBUFFERPROC glMapBuffer = NULL;
PFNGLUNMAPBUFFERPROC glUnmapBuffer = NULL;
PFNGLGETBUFFERPARAMETERIVPROC glGetBufferParameteriv = NULL;
PFNGLGETBUFFERPOINTERVPROC glGetBufferPointerv = NULL;
#endif
#if defined(ENABLE_GL_VERSION_2_0) && defined(GL_VERSION_2_0)
PFNGLBLENDEQUATIONSEPARATEPROC glBlendEquationSeparate = NULL;
PFNGLDRAWBUFFERSPROC glDrawBuffers = NULL;
PFNGLSTENCILOPSEPARATEPROC glStencilOpSeparate = NULL;
PFNGLSTENCILFUNCSEPARATEPROC glStencilFuncSeparate = NULL;
PFNGLSTENCILMASKSEPARATEPROC glStencilMaskSeparate = NULL;
PFNGLATTACHSHADERPROC glAttachShader = NULL;
PFNGLBINDATTRIBLOCATIONPROC glBindAttribLocation = NULL;
PFNGLCOMPILESHADERPROC glCompileShader = NULL;
PFNGLCREATEPROGRAMPROC glCreateProgram = NULL;
PFNGLCREATESHADERPROC glCreateShader = NULL;
PFNGLDELETEPROGRAMPROC glDeleteProgram = NULL;
PFNGLDELETESHADERPROC glDeleteShader = NULL;
PFNGLDETACHSHADERPROC glDetachShader = NULL;
PFNGLDISABLEVERTEXATTRIBARRAYPROC glDisableVertexAttribArray = NULL;
PFNGLENABLEVERTEXATTRIBARRAYPROC glEnableVertexAttribArray = NULL;
PFNGLGETACTIVEATTRIBPROC glGetActiveAttrib = NULL;
PFNGLGETACTIVEUNIFORMPROC glGetActiveUniform = NULL;
PFNGLGETATTACHEDSHADERSPROC glGetAttachedShaders = NULL;
PFNGLGETATTRIBLOCATIONPROC glGetAttribLocation = NULL;
PFNGLGETSHADERIVPROC glGetShaderiv = NULL;
PFNGLGETSHADERINFOLOGPROC glGetShaderInfoLog = NULL;
PFNGLGETSHADERSOURCEPROC glGetShaderSource = NULL;
PFNGLGETVERTEXATTRIBDVPROC glGetVertexAttribdv = NULL;
PFNGLGETVERTEXATTRIBFVPROC glGetVertexAttribfv = NULL;
PFNGLGETVERTEXATTRIBIVPROC glGetVertexAttribiv = NULL;
PFNGLGETVERTEXATTRIBPOINTERVPROC glGetVertexAttribPointerv = NULL;
PFNGLISPROGRAMPROC glIsProgram = NULL;
PFNGLISSHADERPROC glIsShader = NULL;
PFNGLLINKPROGRAMPROC glLinkProgram = NULL;
PFNGLSHADERSOURCEPROC glShaderSource = NULL;
PFNGLUSEPROGRAMPROC glUseProgram = NULL;
PFNGLVALIDATEPROGRAMPROC glValidateProgram = NULL;
PFNGLVERTEXATTRIB1DPROC glVertexAttrib1d = NULL;
PFNGLVERTEXATTRIB1DVPROC glVertexAttrib1dv = NULL;
PFNGLVERTEXATTRIB1SPROC glVertexAttrib1s = NULL;
PFNGLVERTEXATTRIB1SVPROC glVertexAttrib1sv = NULL;
PFNGLVERTEXATTRIB2DPROC glVertexAttrib2d = NULL;
PFNGLVERTEXATTRIB2DVPROC glVertexAttrib2dv = NULL;
PFNGLVERTEXATTRIB2FPROC glVertexAttrib2f = NULL;
PFNGLVERTEXATTRIB2FVPROC glVertexAttrib2fv = NULL;
PFNGLVERTEXATTRIB2SPROC glVertexAttrib2s = NULL;
PFNGLVERTEXATTRIB2SVPROC glVertexAttrib2sv = NULL;
PFNGLVERTEXATTRIB3DPROC glVertexAttrib3d = NULL;
PFNGLVERTEXATTRIB3DVPROC glVertexAttrib3dv = NULL;
PFNGLVERTEXATTRIB3FPROC glVertexAttrib3f = NULL;
PFNGLVERTEXATTRIB3FVPROC glVertexAttrib3fv = NULL;
PFNGLVERTEXATTRIB3SPROC glVertexAttrib3s = NULL;
PFNGLVERTEXATTRIB3SVPROC glVertexAttrib3sv = NULL;
PFNGLVERTEXATTRIB4NBVPROC glVertexAttrib4Nbv = NULL;
PFNGLVERTEXATTRIB4NIVPROC glVertexAttrib4Niv = NULL;
PFNGLVERTEXATTRIB4NSVPROC glVertexAttrib4Nsv = NULL;
PFNGLVERTEXATTRIB4NUBPROC glVertexAttrib4Nub = NULL;
PFNGLVERTEXATTRIB4NUBVPROC glVertexAttrib4Nubv = NULL;
PFNGLVERTEXATTRIB4NUIVPROC glVertexAttrib4Nuiv = NULL;
PFNGLVERTEXATTRIB4NUSVPROC glVertexAttrib4Nusv = NULL;
PFNGLVERTEXATTRIB4BVPROC glVertexAttrib4bv = NULL;
PFNGLVERTEXATTRIB4DPROC glVertexAttrib4d = NULL;
PFNGLVERTEXATTRIB4DVPROC glVertexAttrib4dv = NULL;
PFNGLVERTEXATTRIB4FPROC glVertexAttrib4f = NULL;
PFNGLVERTEXATTRIB4FVPROC glVertexAttrib4fv = NULL;
PFNGLVERTEXATTRIB4IVPROC glVertexAttrib4iv = NULL;
PFNGLVERTEXATTRIB4SPROC glVertexAttrib4s = NULL;
PFNGLVERTEXATTRIB4SVPROC glVertexAttrib4sv = NULL;
PFNGLVERTEXATTRIB4UBVPROC glVertexAttrib4ubv = NULL;
PFNGLVERTEXATTRIB4UIVPROC glVertexAttrib4uiv = NULL;
PFNGLVERTEXATTRIB4USVPROC glVertexAttrib4usv = NULL;
PFNGLVERTEXATTRIBPOINTERPROC glVertexAttribPointer = NULL;
#endif
#if defined(ENABLE_GL_VERSION_3_0) && defined(GL_VERSION_3_0)
PFNGLCOLORMASKIPROC glColorMaski = NULL;
PFNGLGETBOOLEANI_VPROC glGetBooleani_v = NULL;
PFNGLGETINTEGERI_VPROC glGetIntegeri_v = NULL;
PFNGLENABLEIPROC glEnablei = NULL;
PFNGLDISABLEIPROC glDisablei = NULL;
PFNGLISENABLEDIPROC glIsEnabledi = NULL;
PFNGLBEGINTRANSFORMFEEDBACKPROC glBeginTransformFeedback = NULL;
PFNGLENDTRANSFORMFEEDBACKPROC glEndTransformFeedback = NULL;
PFNGLBINDBUFFERRANGEPROC glBindBufferRange = NULL;
PFNGLBINDBUFFERBASEPROC glBindBufferBase = NULL;
PFNGLTRANSFORMFEEDBACKVARYINGSPROC glTransformFeedbackVaryings = NULL;
PFNGLGETTRANSFORMFEEDBACKVARYINGPROC glGetTransformFeedbackVarying = NULL;
PFNGLCLAMPCOLORPROC glClampColor = NULL;
PFNGLBEGINCONDITIONALRENDERPROC glBeginConditionalRender = NULL;
PFNGLENDCONDITIONALRENDERPROC glEndConditionalRender = NULL;
PFNGLVERTEXATTRIBIPOINTERPROC glVertexAttribIPointer = NULL;
PFNGLGETVERTEXATTRIBIIVPROC glGetVertexAttribIiv = NULL;
PFNGLGETVERTEXATTRIBIUIVPROC glGetVertexAttribIuiv = NULL;
PFNGLVERTEXATTRIBI1IPROC glVertexAttribI1i = NULL;
PFNGLVERTEXATTRIBI2IPROC glVertexAttribI2i = NULL;
PFNGLVERTEXATTRIBI3IPROC glVertexAttribI3i = NULL;
PFNGLVERTEXATTRIBI4IPROC glVertexAttribI4i = NULL;
PFNGLVERTEXATTRIBI1UIPROC glVertexAttribI1ui = NULL;
PFNGLVERTEXATTRIBI2UIPROC glVertexAttribI2ui = NULL;
PFNGLVERTEXATTRIBI3UIPROC glVertexAttribI3ui = NULL;
PFNGLVERTEXATTRIBI4UIPROC glVertexAttribI4ui = NULL;
PFNGLVERTEXATTRIBI1IVPROC glVertexAttribI1iv = NULL;
PFNGLVERTEXATTRIBI2IVPROC glVertexAttribI2iv = NULL;
PFNGLVERTEXATTRIBI3IVPROC glVertexAttribI3iv = NULL;
PFNGLVERTEXATTRIBI4IVPROC glVertexAttribI4iv = NULL;
PFNGLVERTEXATTRIBI1UIVPROC glVertexAttribI1uiv = NULL;
PFNGLVERTEXATTRIBI2UIVPROC glVertexAttribI2uiv = NULL;
PFNGLVERTEXATTRIBI3UIVPROC glVertexAttribI3uiv = NULL;
PFNGLVERTEXATTRIBI4UIVPROC glVertexAttribI4uiv = NULL;
PFNGLVERTEXATTRIBI4BVPROC glVertexAttribI4bv = NULL;
PFNGLVERTEXATTRIBI4SVPROC glVertexAttribI4sv = NULL;
PFNGLVERTEXATTRIBI4UBVPROC glVertexAttribI4ubv = NULL;
PFNGLVERTEXATTRIBI4USVPROC glVertexAttribI4usv = NULL;
PFNGLBINDFRAGDATALOCATIONPROC glBindFragDataLocation = NULL;
PFNGLGETFRAGDATALOCATIONPROC glGetFragDataLocation = NULL;
PFNGLTEXPARAMETERIIVPROC glTexParameterIiv = NULL;
PFNGLTEXPARAMETERIUIVPROC glTexParameterIuiv = NULL;
PFNGLGETTEXPARAMETERIIVPROC glGetTexParameterIiv = NULL;
PFNGLGETTEXPARAMETERIUIVPROC glGetTexParameterIuiv = NULL;
PFNGLCLEARBUFFERIVPROC glClearBufferiv = NULL;
PFNGLCLEARBUFFERUIVPROC glClearBufferuiv = NULL;
PFNGLCLEARBUFFERFVPROC glClearBufferfv = NULL;
PFNGLCLEARBUFFERFIPROC glClearBufferfi = NULL;
PFNGLGETSTRINGIPROC glGetStringi = NULL;
PFNGLISRENDERBUFFERPROC glIsRenderbuffer = NULL;
PFNGLBINDRENDERBUFFERPROC glBindRenderbuffer = NULL;
PFNGLDELETERENDERBUFFERSPROC glDeleteRenderbuffers = NULL;
PFNGLGENRENDERBUFFERSPROC glGenRenderbuffers = NULL;
PFNGLRENDERBUFFERSTORAGEPROC glRenderbufferStorage = NULL;
PFNGLGETRENDERBUFFERPARAMETERIVPROC glGetRenderbufferParameteriv = NULL;
PFNGLISFRAMEBUFFERPROC glIsFramebuffer = NULL;
PFNGLBINDFRAMEBUFFERPROC glBindFramebuffer = NULL;
PFNGLDELETEFRAMEBUFFERSPROC glDeleteFramebuffers = NULL;
PFNGLGENFRAMEBUFFERSPROC glGenFramebuffers = NULL;
PFNGLCHECKFRAMEBUFFERSTATUSPROC glCheckFramebufferStatus = NULL;
PFNGLFRAMEBUFFERTEXTURE1DPROC glFramebufferTexture1D = NULL;
PFNGLFRAMEBUFFERTEXTURE2DPROC glFramebufferTexture2D = NULL;
PFNGLFRAMEBUFFERTEXTURE3DPROC glFramebufferTexture3D = NULL;
PFNGLFRAMEBUFFERRENDERBUFFERPROC glFramebufferRenderbuffer = NULL;
PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC glGetFramebufferAttachmentParameteriv = NULL;
PFNGLGENERATEMIPMAPPROC glGenerateMipmap = NULL;
PFNGLBLITFRAMEBUFFERPROC glBlitFramebuffer = NULL;
PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC glRenderbufferStorageMultisample = NULL;
PFNGLFRAMEBUFFERTEXTURELAYERPROC glFramebufferTextureLayer = NULL;
PFNGLMAPBUFFERRANGEPROC glMapBufferRange = NULL;
PFNGLFLUSHMAPPEDBUFFERRANGEPROC glFlushMappedBufferRange = NULL;
PFNGLBINDVERTEXARRAYPROC glBindVertexArray = NULL;
PFNGLDELETEVERTEXARRAYSPROC glDeleteVertexArrays = NULL;
PFNGLGENVERTEXARRAYSPROC glGenVertexArrays = NULL;
PFNGLISVERTEXARRAYPROC glIsVertexArray = NULL;
#endif
#if defined(ENABLE_GL_VERSION_3_1) && defined(GL_VERSION_3_1)
PFNGLDRAWARRAYSINSTANCEDPROC glDrawArraysInstanced = NULL;
PFNGLDRAWELEMENTSINSTANCEDPROC glDrawElementsInstanced = NULL;
PFNGLTEXBUFFERPROC glTexBuffer = NULL;
PFNGLPRIMITIVERESTARTINDEXPROC glPrimitiveRestartIndex = NULL;
PFNGLCOPYBUFFERSUBDATAPROC glCopyBufferSubData = NULL;
PFNGLGETACTIVEUNIFORMSIVPROC glGetActiveUniformsiv = NULL;
PFNGLGETACTIVEUNIFORMNAMEPROC glGetActiveUniformName = NULL;
PFNGLGETACTIVEUNIFORMBLOCKIVPROC glGetActiveUniformBlockiv = NULL;
PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC glGetActiveUniformBlockName = NULL;
#endif
#if defined(ENABLE_GL_VERSION_3_2) && defined(GL_VERSION_3_2)
PFNGLDRAWELEMENTSBASEVERTEXPROC glDrawElementsBaseVertex = NULL;
PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC glDrawRangeElementsBaseVertex = NULL;
PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC glDrawElementsInstancedBaseVertex = NULL;
PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC glMultiDrawElementsBaseVertex = NULL;
PFNGLPROVOKINGVERTEXPROC glProvokingVertex = NULL;
PFNGLFENCESYNCPROC glFenceSync = NULL;
PFNGLISSYNCPROC glIsSync = NULL;
PFNGLDELETESYNCPROC glDeleteSync = NULL;
PFNGLCLIENTWAITSYNCPROC glClientWaitSync = NULL;
PFNGLWAITSYNCPROC glWaitSync = NULL;
PFNGLGETINTEGER64VPROC glGetInteger64v = NULL;
PFNGLGETSYNCIVPROC glGetSynciv = NULL;
PFNGLGETINTEGER64I_VPROC glGetInteger64i_v = NULL;
PFNGLGETBUFFERPARAMETERI64VPROC glGetBufferParameteri64v = NULL;
PFNGLFRAMEBUFFERTEXTUREPROC glFramebufferTexture = NULL;
PFNGLTEXIMAGE2DMULTISAMPLEPROC glTexImage2DMultisample = NULL;
PFNGLTEXIMAGE3DMULTISAMPLEPROC glTexImage3DMultisample = NULL;
PFNGLGETMULTISAMPLEFVPROC glGetMultisamplefv = NULL;
PFNGLSAMPLEMASKIPROC glSampleMaski = NULL;
#endif
#if defined(ENABLE_GL_VERSION_3_3) && defined(GL_VERSION_3_3)
PFNGLBINDFRAGDATALOCATIONINDEXEDPROC glBindFragDataLocationIndexed = NULL;
PFNGLGETFRAGDATAINDEXPROC glGetFragDataIndex = NULL;
PFNGLGENSAMPLERSPROC glGenSamplers = NULL;
PFNGLDELETESAMPLERSPROC glDeleteSamplers = NULL;
PFNGLISSAMPLERPROC glIsSampler = NULL;
PFNGLBINDSAMPLERPROC glBindSampler = NULL;
PFNGLSAMPLERPARAMETERIPROC glSamplerParameteri = NULL;
PFNGLSAMPLERPARAMETERIVPROC glSamplerParameteriv = NULL;
PFNGLSAMPLERPARAMETERFPROC glSamplerParameterf = NULL;
PFNGLSAMPLERPARAMETERFVPROC glSamplerParameterfv = NULL;
PFNGLSAMPLERPARAMETERIIVPROC glSamplerParameterIiv = NULL;
PFNGLSAMPLERPARAMETERIUIVPROC glSamplerParameterIuiv = NULL;
PFNGLGETSAMPLERPARAMETERIVPROC glGetSamplerParameteriv = NULL;
PFNGLGETSAMPLERPARAMETERIIVPROC glGetSamplerParameterIiv = NULL;
PFNGLGETSAMPLERPARAMETERFVPROC glGetSamplerParameterfv = NULL;
PFNGLGETSAMPLERPARAMETERIUIVPROC glGetSamplerParameterIuiv = NULL;
PFNGLQUERYCOUNTERPROC glQueryCounter = NULL;
PFNGLVERTEXATTRIBDIVISORPROC glVertexAttribDivisor = NULL;
PFNGLVERTEXATTRIBP1UIPROC glVertexAttribP1ui = NULL;
PFNGLVERTEXATTRIBP1UIVPROC glVertexAttribP1uiv = NULL;
PFNGLVERTEXATTRIBP2UIPROC glVertexAttribP2ui = NULL;
PFNGLVERTEXATTRIBP2UIVPROC glVertexAttribP2uiv = NULL;
PFNGLVERTEXATTRIBP3UIPROC glVertexAttribP3ui = NULL;
PFNGLVERTEXATTRIBP3UIVPROC glVertexAttribP3uiv = NULL;
PFNGLVERTEXATTRIBP4UIPROC glVertexAttribP4ui = NULL;
PFNGLVERTEXATTRIBP4UIVPROC glVertexAttribP4uiv = NULL;
#endif
#if defined(ENABLE_GL_VERSION_4_0) && defined(GL_VERSION_4_0)
PFNGLMINSAMPLESHADINGPROC glMinSampleShading = NULL;
PFNGLBLENDEQUATIONSEPARATEIPROC glBlendEquationSeparatei = NULL;
PFNGLBLENDFUNCIPROC glBlendFunci = NULL;
PFNGLBLENDFUNCSEPARATEIPROC glBlendFuncSeparatei = NULL;
PFNGLDRAWARRAYSINDIRECTPROC glDrawArraysIndirect = NULL;
PFNGLDRAWELEMENTSINDIRECTPROC glDrawElementsIndirect = NULL;
PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC glGetSubroutineUniformLocation = NULL;
PFNGLGETSUBROUTINEINDEXPROC glGetSubroutineIndex = NULL;
PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC glGetActiveSubroutineUniformiv = NULL;
PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC glGetActiveSubroutineUniformName = NULL;
PFNGLGETACTIVESUBROUTINENAMEPROC glGetActiveSubroutineName = NULL;
PFNGLPATCHPARAMETERIPROC glPatchParameteri = NULL;
PFNGLPATCHPARAMETERFVPROC glPatchParameterfv = NULL;
PFNGLBINDTRANSFORMFEEDBACKPROC glBindTransformFeedback = NULL;
PFNGLDELETETRANSFORMFEEDBACKSPROC glDeleteTransformFeedbacks = NULL;
PFNGLGENTRANSFORMFEEDBACKSPROC glGenTransformFeedbacks = NULL;
PFNGLISTRANSFORMFEEDBACKPROC glIsTransformFeedback = NULL;
PFNGLPAUSETRANSFORMFEEDBACKPROC glPauseTransformFeedback = NULL;
PFNGLRESUMETRANSFORMFEEDBACKPROC glResumeTransformFeedback = NULL;
PFNGLDRAWTRANSFORMFEEDBACKPROC glDrawTransformFeedback = NULL;
PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC glDrawTransformFeedbackStream = NULL;
#endif
#if defined(ENABLE_GL_VERSION_4_1) && defined(GL_VERSION_4_1)
PFNGLRELEASESHADERCOMPILERPROC glReleaseShaderCompiler = NULL;
PFNGLSHADERBINARYPROC glShaderBinary = NULL;
PFNGLGETSHADERPRECISIONFORMATPROC glGetShaderPrecisionFormat = NULL;
PFNGLDEPTHRANGEFPROC glDepthRangef = NULL;
PFNGLCLEARDEPTHFPROC glClearDepthf = NULL;
PFNGLUSEPROGRAMSTAGESPROC glUseProgramStages = NULL;
PFNGLACTIVESHADERPROGRAMPROC glActiveShaderProgram = NULL;
PFNGLCREATESHADERPROGRAMVPROC glCreateShaderProgramv = NULL;
PFNGLBINDPROGRAMPIPELINEPROC glBindProgramPipeline = NULL;
PFNGLDELETEPROGRAMPIPELINESPROC glDeleteProgramPipelines = NULL;
PFNGLGENPROGRAMPIPELINESPROC glGenProgramPipelines = NULL;
PFNGLISPROGRAMPIPELINEPROC glIsProgramPipeline = NULL;
PFNGLVALIDATEPROGRAMPIPELINEPROC glValidateProgramPipeline = NULL;
PFNGLVERTEXATTRIBL1DPROC glVertexAttribL1d = NULL;
PFNGLVERTEXATTRIBL2DPROC glVertexAttribL2d = NULL;
PFNGLVERTEXATTRIBL3DPROC glVertexAttribL3d = NULL;
PFNGLVERTEXATTRIBL4DPROC glVertexAttribL4d = NULL;
PFNGLVERTEXATTRIBL1DVPROC glVertexAttribL1dv = NULL;
PFNGLVERTEXATTRIBL2DVPROC glVertexAttribL2dv = NULL;
PFNGLVERTEXATTRIBL3DVPROC glVertexAttribL3dv = NULL;
PFNGLVERTEXATTRIBL4DVPROC glVertexAttribL4dv = NULL;
PFNGLVERTEXATTRIBLPOINTERPROC glVertexAttribLPointer = NULL;
PFNGLGETVERTEXATTRIBLDVPROC glGetVertexAttribLdv = NULL;
PFNGLVIEWPORTARRAYVPROC glViewportArrayv = NULL;
PFNGLVIEWPORTINDEXEDFPROC glViewportIndexedf = NULL;
PFNGLVIEWPORTINDEXEDFVPROC glViewportIndexedfv = NULL;
PFNGLSCISSORARRAYVPROC glScissorArrayv = NULL;
PFNGLSCISSORINDEXEDPROC glScissorIndexed = NULL;
PFNGLSCISSORINDEXEDVPROC glScissorIndexedv = NULL;
PFNGLDEPTHRANGEARRAYVPROC glDepthRangeArrayv = NULL;
PFNGLDEPTHRANGEINDEXEDPROC glDepthRangeIndexed = NULL;
PFNGLGETFLOATI_VPROC glGetFloati_v = NULL;
PFNGLGETDOUBLEI_VPROC glGetDoublei_v = NULL;
#endif
#if defined(ENABLE_GL_VERSION_4_2) && defined(GL_VERSION_4_2)
PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC glDrawArraysInstancedBaseInstance = NULL;
PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC glDrawElementsInstancedBaseInstance = NULL;
PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC glDrawElementsInstancedBaseVertexBaseInstance = NULL;
PFNGLGETINTERNALFORMATIVPROC glGetInternalformativ = NULL;
PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC glGetActiveAtomicCounterBufferiv = NULL;
PFNGLBINDIMAGETEXTUREPROC glBindImageTexture = NULL;
PFNGLMEMORYBARRIERPROC glMemoryBarrier = NULL;
PFNGLTEXSTORAGE1DPROC glTexStorage1D = NULL;
PFNGLTEXSTORAGE2DPROC glTexStorage2D = NULL;
PFNGLTEXSTORAGE3DPROC glTexStorage3D = NULL;
PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC glDrawTransformFeedbackInstanced = NULL;
PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC glDrawTransformFeedbackStreamInstanced = NULL;
#endif
#if defined(ENABLE_GL_VERSION_4_3) && defined(GL_VERSION_4_3)
PFNGLCLEARBUFFERDATAPROC glClearBufferData = NULL;
PFNGLCLEARBUFFERSUBDATAPROC glClearBufferSubData = NULL;
PFNGLDISPATCHCOMPUTEPROC glDispatchCompute = NULL;
PFNGLDISPATCHCOMPUTEINDIRECTPROC glDispatchComputeIndirect = NULL;
PFNGLCOPYIMAGESUBDATAPROC glCopyImageSubData = NULL;
PFNGLFRAMEBUFFERPARAMETERIPROC glFramebufferParameteri = NULL;
PFNGLGETFRAMEBUFFERPARAMETERIVPROC glGetFramebufferParameteriv = NULL;
PFNGLGETINTERNALFORMATI64VPROC glGetInternalformati64v = NULL;
PFNGLINVALIDATETEXSUBIMAGEPROC glInvalidateTexSubImage = NULL;
PFNGLINVALIDATETEXIMAGEPROC glInvalidateTexImage = NULL;
PFNGLINVALIDATEBUFFERSUBDATAPROC glInvalidateBufferSubData = NULL;
PFNGLINVALIDATEBUFFERDATAPROC glInvalidateBufferData = NULL;
PFNGLINVALIDATEFRAMEBUFFERPROC glInvalidateFramebuffer = NULL;
PFNGLINVALIDATESUBFRAMEBUFFERPROC glInvalidateSubFramebuffer = NULL;
PFNGLMULTIDRAWARRAYSINDIRECTPROC glMultiDrawArraysIndirect = NULL;
PFNGLMULTIDRAWELEMENTSINDIRECTPROC glMultiDrawElementsIndirect = NULL;
PFNGLSHADERSTORAGEBLOCKBINDINGPROC glShaderStorageBlockBinding = NULL;
PFNGLTEXBUFFERRANGEPROC glTexBufferRange = NULL;
PFNGLTEXSTORAGE2DMULTISAMPLEPROC glTexStorage2DMultisample = NULL;
PFNGLTEXSTORAGE3DMULTISAMPLEPROC glTexStorage3DMultisample = NULL;
PFNGLTEXTUREVIEWPROC glTextureView = NULL;
PFNGLBINDVERTEXBUFFERPROC glBindVertexBuffer = NULL;
PFNGLVERTEXATTRIBFORMATPROC glVertexAttribFormat = NULL;
PFNGLVERTEXATTRIBIFORMATPROC glVertexAttribIFormat = NULL;
PFNGLVERTEXATTRIBLFORMATPROC glVertexAttribLFormat = NULL;
PFNGLVERTEXATTRIBBINDINGPROC glVertexAttribBinding = NULL;
PFNGLVERTEXBINDINGDIVISORPROC glVertexBindingDivisor = NULL;
PFNGLDEBUGMESSAGECONTROLPROC glDebugMessageControl = NULL;
PFNGLDEBUGMESSAGEINSERTPROC glDebugMessageInsert = NULL;
PFNGLDEBUGMESSAGECALLBACKPROC glDebugMessageCallback = NULL;
PFNGLGETDEBUGMESSAGELOGPROC glGetDebugMessageLog = NULL;
PFNGLPUSHDEBUGGROUPPROC glPushDebugGroup = NULL;
PFNGLPOPDEBUGGROUPPROC glPopDebugGroup = NULL;
PFNGLOBJECTLABELPROC glObjectLabel = NULL;
PFNGLGETOBJECTLABELPROC glGetObjectLabel = NULL;
PFNGLOBJECTPTRLABELPROC glObjectPtrLabel = NULL;
PFNGLGETOBJECTPTRLABELPROC glGetObjectPtrLabel = NULL;
#endif
#if defined(ENABLE_GL_VERSION_4_4) && defined(GL_VERSION_4_4)
PFNGLBUFFERSTORAGEPROC glBufferStorage = NULL;
PFNGLCLEARTEXIMAGEPROC glClearTexImage = NULL;
PFNGLCLEARTEXSUBIMAGEPROC glClearTexSubImage = NULL;
PFNGLBINDBUFFERSBASEPROC glBindBuffersBase = NULL;
PFNGLBINDBUFFERSRANGEPROC glBindBuffersRange = NULL;
PFNGLBINDTEXTURESPROC glBindTextures = NULL;
PFNGLBINDSAMPLERSPROC glBindSamplers = NULL;
PFNGLBINDIMAGETEXTURESPROC glBindImageTextures = NULL;
PFNGLBINDVERTEXBUFFERSPROC glBindVertexBuffers = NULL;
#endif
#if defined(ENABLE_GL_VERSION_4_5) && defined(GL_VERSION_4_5)
PFNGLCLIPCONTROLPROC glClipControl = NULL;
PFNGLCREATETRANSFORMFEEDBACKSPROC glCreateTransformFeedbacks = NULL;
PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC glTransformFeedbackBufferBase = NULL;
PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC glTransformFeedbackBufferRange = NULL;
PFNGLGETTRANSFORMFEEDBACKIVPROC glGetTransformFeedbackiv = NULL;
PFNGLGETTRANSFORMFEEDBACKI_VPROC glGetTransformFeedbacki_v = NULL;
PFNGLGETTRANSFORMFEEDBACKI64_VPROC glGetTransformFeedbacki64_v = NULL;
PFNGLCREATEBUFFERSPROC glCreateBuffers = NULL;
PFNGLCOPYNAMEDBUFFERSUBDATAPROC glCopyNamedBufferSubData = NULL;
PFNGLCLEARNAMEDBUFFERDATAPROC glClearNamedBufferData = NULL;
PFNGLCLEARNAMEDBUFFERSUBDATAPROC glClearNamedBufferSubData = NULL;
PFNGLMAPNAMEDBUFFERPROC glMapNamedBuffer = NULL;
PFNGLMAPNAMEDBUFFERRANGEPROC glMapNamedBufferRange = NULL;
PFNGLUNMAPNAMEDBUFFERPROC glUnmapNamedBuffer = NULL;
PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC glFlushMappedNamedBufferRange = NULL;
PFNGLGETNAMEDBUFFERPARAMETERIVPROC glGetNamedBufferParameteriv = NULL;
PFNGLGETNAMEDBUFFERPARAMETERI64VPROC glGetNamedBufferParameteri64v = NULL;
PFNGLGETNAMEDBUFFERPOINTERVPROC glGetNamedBufferPointerv = NULL;
PFNGLGETNAMEDBUFFERSUBDATAPROC glGetNamedBufferSubData = NULL;
PFNGLCREATEFRAMEBUFFERSPROC glCreateFramebuffers = NULL;
PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC glInvalidateNamedFramebufferData = NULL;
PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC glInvalidateNamedFramebufferSubData = NULL;
PFNGLCLEARNAMEDFRAMEBUFFERIVPROC glClearNamedFramebufferiv = NULL;
PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC glClearNamedFramebufferuiv = NULL;
PFNGLCLEARNAMEDFRAMEBUFFERFVPROC glClearNamedFramebufferfv = NULL;
PFNGLCLEARNAMEDFRAMEBUFFERFIPROC glClearNamedFramebufferfi = NULL;
PFNGLBLITNAMEDFRAMEBUFFERPROC glBlitNamedFramebuffer = NULL;
PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC glCheckNamedFramebufferStatus = NULL;
PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC glGetNamedFramebufferParameteriv = NULL;
PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC glGetNamedFramebufferAttachmentParameteriv = NULL;
PFNGLCREATERENDERBUFFERSPROC glCreateRenderbuffers = NULL;
PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC glGetNamedRenderbufferParameteriv = NULL;
PFNGLCREATETEXTURESPROC glCreateTextures = NULL;
PFNGLTEXTUREBUFFERPROC glTextureBuffer = NULL;
PFNGLTEXTUREBUFFERRANGEPROC glTextureBufferRange = NULL;
PFNGLTEXTURESTORAGE1DPROC glTextureStorage1D = NULL;
PFNGLTEXTURESTORAGE2DPROC glTextureStorage2D = NULL;
PFNGLTEXTURESTORAGE3DPROC glTextureStorage3D = NULL;
PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC glTextureStorage2DMultisample = NULL;
PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC glTextureStorage3DMultisample = NULL;
PFNGLTEXTURESUBIMAGE1DPROC glTextureSubImage1D = NULL;
PFNGLTEXTURESUBIMAGE2DPROC glTextureSubImage2D = NULL;
PFNGLTEXTURESUBIMAGE3DPROC glTextureSubImage3D = NULL;
PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC glCompressedTextureSubImage1D = NULL;
PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC glCompressedTextureSubImage2D = NULL;
PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC glCompressedTextureSubImage3D = NULL;
PFNGLCOPYTEXTURESUBIMAGE1DPROC glCopyTextureSubImage1D = NULL;
PFNGLCOPYTEXTURESUBIMAGE2DPROC glCopyTextureSubImage2D = NULL;
PFNGLCOPYTEXTURESUBIMAGE3DPROC glCopyTextureSubImage3D = NULL;
PFNGLTEXTUREPARAMETERFPROC glTextureParameterf = NULL;
PFNGLTEXTUREPARAMETERFVPROC glTextureParameterfv = NULL;
PFNGLTEXTUREPARAMETERIPROC glTextureParameteri = NULL;
PFNGLTEXTUREPARAMETERIIVPROC glTextureParameterIiv = NULL;
PFNGLTEXTUREPARAMETERIUIVPROC glTextureParameterIuiv = NULL;
PFNGLTEXTUREPARAMETERIVPROC glTextureParameteriv = NULL;
PFNGLGENERATETEXTUREMIPMAPPROC glGenerateTextureMipmap = NULL;
PFNGLBINDTEXTUREUNITPROC glBindTextureUnit = NULL;
PFNGLGETTEXTUREIMAGEPROC glGetTextureImage = NULL;
PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC glGetCompressedTextureImage = NULL;
PFNGLGETTEXTURELEVELPARAMETERFVPROC glGetTextureLevelParameterfv = NULL;
PFNGLGETTEXTURELEVELPARAMETERIVPROC glGetTextureLevelParameteriv = NULL;
PFNGLGETTEXTUREPARAMETERFVPROC glGetTextureParameterfv = NULL;
PFNGLGETTEXTUREPARAMETERIIVPROC glGetTextureParameterIiv = NULL;
PFNGLGETTEXTUREPARAMETERIUIVPROC glGetTextureParameterIuiv = NULL;
PFNGLGETTEXTUREPARAMETERIVPROC glGetTextureParameteriv = NULL;
PFNGLCREATEVERTEXARRAYSPROC glCreateVertexArrays = NULL;
PFNGLDISABLEVERTEXARRAYATTRIBPROC glDisableVertexArrayAttrib = NULL;
PFNGLENABLEVERTEXARRAYATTRIBPROC glEnableVertexArrayAttrib = NULL;
PFNGLVERTEXARRAYELEMENTBUFFERPROC glVertexArrayElementBuffer = NULL;
PFNGLVERTEXARRAYVERTEXBUFFERPROC glVertexArrayVertexBuffer = NULL;
PFNGLVERTEXARRAYVERTEXBUFFERSPROC glVertexArrayVertexBuffers = NULL;
PFNGLVERTEXARRAYATTRIBBINDINGPROC glVertexArrayAttribBinding = NULL;
PFNGLVERTEXARRAYATTRIBFORMATPROC glVertexArrayAttribFormat = NULL;
PFNGLVERTEXARRAYATTRIBIFORMATPROC glVertexArrayAttribIFormat = NULL;
PFNGLVERTEXARRAYATTRIBLFORMATPROC glVertexArrayAttribLFormat = NULL;
PFNGLVERTEXARRAYBINDINGDIVISORPROC glVertexArrayBindingDivisor = NULL;
PFNGLGETVERTEXARRAYIVPROC glGetVertexArrayiv = NULL;
PFNGLGETVERTEXARRAYINDEXEDIVPROC glGetVertexArrayIndexediv = NULL;
PFNGLGETVERTEXARRAYINDEXED64IVPROC glGetVertexArrayIndexed64iv = NULL;
PFNGLCREATESAMPLERSPROC glCreateSamplers = NULL;
PFNGLCREATEPROGRAMPIPELINESPROC glCreateProgramPipelines = NULL;
PFNGLCREATEQUERIESPROC glCreateQueries = NULL;
PFNGLMEMORYBARRIERBYREGIONPROC glMemoryBarrierByRegion = NULL;
PFNGLGETTEXTURESUBIMAGEPROC glGetTextureSubImage = NULL;
PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC glGetCompressedTextureSubImage = NULL;
PFNGLGETGRAPHICSRESETSTATUSPROC glGetGraphicsResetStatus = NULL;
PFNGLTEXTUREBARRIERPROC glTextureBarrier = NULL;
#endif
#if defined(ENABLE_GL_VERSION_4_6) && defined(GL_VERSION_4_6)
PFNGLSPECIALIZESHADERPROC glSpecializeShader = NULL;
PFNGLMULTIDRAWARRAYSINDIRECTCOUNTPROC glMultiDrawArraysIndirectCount = NULL;
PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTPROC glMultiDrawElementsIndirectCount = NULL;
PFNGLPOLYGONOFFSETCLAMPPROC glPolygonOffsetClamp = NULL;
#endif

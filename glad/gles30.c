/**
 * SPDX-License-Identifier: (WTFPL OR CC0-1.0) AND Apache-2.0
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "gles30.h"

#ifndef GLAD_IMPL_UTIL_C_
#define GLAD_IMPL_UTIL_C_

#ifdef _MSC_VER
#define GLAD_IMPL_UTIL_SSCANF sscanf_s
#else
#define GLAD_IMPL_UTIL_SSCANF sscanf
#endif

#endif /* GLAD_IMPL_UTIL_C_ */

#ifdef __cplusplus
extern "C" {
#endif



int GLAD_GL_ES_VERSION_2_0 = 0;
int GLAD_GL_ES_VERSION_3_0 = 0;



PFNGLACTIVETEXTUREPROC glad_gles30_glActiveTexture = NULL;
PFNGLATTACHSHADERPROC glad_gles30_glAttachShader = NULL;
PFNGLBEGINQUERYPROC glad_gles30_glBeginQuery = NULL;
PFNGLBEGINTRANSFORMFEEDBACKPROC glad_gles30_glBeginTransformFeedback = NULL;
PFNGLBINDATTRIBLOCATIONPROC glad_gles30_glBindAttribLocation = NULL;
PFNGLBINDBUFFERPROC glad_gles30_glBindBuffer = NULL;
PFNGLBINDBUFFERBASEPROC glad_gles30_glBindBufferBase = NULL;
PFNGLBINDBUFFERRANGEPROC glad_gles30_glBindBufferRange = NULL;
PFNGLBINDFRAMEBUFFERPROC glad_gles30_glBindFramebuffer = NULL;
PFNGLBINDRENDERBUFFERPROC glad_gles30_glBindRenderbuffer = NULL;
PFNGLBINDSAMPLERPROC glad_gles30_glBindSampler = NULL;
PFNGLBINDTEXTUREPROC glad_gles30_glBindTexture = NULL;
PFNGLBINDTRANSFORMFEEDBACKPROC glad_gles30_glBindTransformFeedback = NULL;
PFNGLBINDVERTEXARRAYPROC glad_gles30_glBindVertexArray = NULL;
PFNGLBLENDCOLORPROC glad_gles30_glBlendColor = NULL;
PFNGLBLENDEQUATIONPROC glad_gles30_glBlendEquation = NULL;
PFNGLBLENDEQUATIONSEPARATEPROC glad_gles30_glBlendEquationSeparate = NULL;
PFNGLBLENDFUNCPROC glad_gles30_glBlendFunc = NULL;
PFNGLBLENDFUNCSEPARATEPROC glad_gles30_glBlendFuncSeparate = NULL;
PFNGLBLITFRAMEBUFFERPROC glad_gles30_glBlitFramebuffer = NULL;
PFNGLBUFFERDATAPROC glad_gles30_glBufferData = NULL;
PFNGLBUFFERSUBDATAPROC glad_gles30_glBufferSubData = NULL;
PFNGLCHECKFRAMEBUFFERSTATUSPROC glad_gles30_glCheckFramebufferStatus = NULL;
PFNGLCLEARPROC glad_gles30_glClear = NULL;
PFNGLCLEARBUFFERFIPROC glad_gles30_glClearBufferfi = NULL;
PFNGLCLEARBUFFERFVPROC glad_gles30_glClearBufferfv = NULL;
PFNGLCLEARBUFFERIVPROC glad_gles30_glClearBufferiv = NULL;
PFNGLCLEARBUFFERUIVPROC glad_gles30_glClearBufferuiv = NULL;
PFNGLCLEARCOLORPROC glad_gles30_glClearColor = NULL;
PFNGLCLEARDEPTHFPROC glad_gles30_glClearDepthf = NULL;
PFNGLCLEARSTENCILPROC glad_gles30_glClearStencil = NULL;
PFNGLCLIENTWAITSYNCPROC glad_gles30_glClientWaitSync = NULL;
PFNGLCOLORMASKPROC glad_gles30_glColorMask = NULL;
PFNGLCOMPILESHADERPROC glad_gles30_glCompileShader = NULL;
PFNGLCOMPRESSEDTEXIMAGE2DPROC glad_gles30_glCompressedTexImage2D = NULL;
PFNGLCOMPRESSEDTEXIMAGE3DPROC glad_gles30_glCompressedTexImage3D = NULL;
PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC glad_gles30_glCompressedTexSubImage2D = NULL;
PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC glad_gles30_glCompressedTexSubImage3D = NULL;
PFNGLCOPYBUFFERSUBDATAPROC glad_gles30_glCopyBufferSubData = NULL;
PFNGLCOPYTEXIMAGE2DPROC glad_gles30_glCopyTexImage2D = NULL;
PFNGLCOPYTEXSUBIMAGE2DPROC glad_gles30_glCopyTexSubImage2D = NULL;
PFNGLCOPYTEXSUBIMAGE3DPROC glad_gles30_glCopyTexSubImage3D = NULL;
PFNGLCREATEPROGRAMPROC glad_gles30_glCreateProgram = NULL;
PFNGLCREATESHADERPROC glad_gles30_glCreateShader = NULL;
PFNGLCULLFACEPROC glad_gles30_glCullFace = NULL;
PFNGLDELETEBUFFERSPROC glad_gles30_glDeleteBuffers = NULL;
PFNGLDELETEFRAMEBUFFERSPROC glad_gles30_glDeleteFramebuffers = NULL;
PFNGLDELETEPROGRAMPROC glad_gles30_glDeleteProgram = NULL;
PFNGLDELETEQUERIESPROC glad_gles30_glDeleteQueries = NULL;
PFNGLDELETERENDERBUFFERSPROC glad_gles30_glDeleteRenderbuffers = NULL;
PFNGLDELETESAMPLERSPROC glad_gles30_glDeleteSamplers = NULL;
PFNGLDELETESHADERPROC glad_gles30_glDeleteShader = NULL;
PFNGLDELETESYNCPROC glad_gles30_glDeleteSync = NULL;
PFNGLDELETETEXTURESPROC glad_gles30_glDeleteTextures = NULL;
PFNGLDELETETRANSFORMFEEDBACKSPROC glad_gles30_glDeleteTransformFeedbacks = NULL;
PFNGLDELETEVERTEXARRAYSPROC glad_gles30_glDeleteVertexArrays = NULL;
PFNGLDEPTHFUNCPROC glad_gles30_glDepthFunc = NULL;
PFNGLDEPTHMASKPROC glad_gles30_glDepthMask = NULL;
PFNGLDEPTHRANGEFPROC glad_gles30_glDepthRangef = NULL;
PFNGLDETACHSHADERPROC glad_gles30_glDetachShader = NULL;
PFNGLDISABLEPROC glad_gles30_glDisable = NULL;
PFNGLDISABLEVERTEXATTRIBARRAYPROC glad_gles30_glDisableVertexAttribArray = NULL;
PFNGLDRAWARRAYSPROC glad_gles30_glDrawArrays = NULL;
PFNGLDRAWARRAYSINSTANCEDPROC glad_gles30_glDrawArraysInstanced = NULL;
PFNGLDRAWBUFFERSPROC glad_gles30_glDrawBuffers = NULL;
PFNGLDRAWELEMENTSPROC glad_gles30_glDrawElements = NULL;
PFNGLDRAWELEMENTSINSTANCEDPROC glad_gles30_glDrawElementsInstanced = NULL;
PFNGLDRAWRANGEELEMENTSPROC glad_gles30_glDrawRangeElements = NULL;
PFNGLENABLEPROC glad_gles30_glEnable = NULL;
PFNGLENABLEVERTEXATTRIBARRAYPROC glad_gles30_glEnableVertexAttribArray = NULL;
PFNGLENDQUERYPROC glad_gles30_glEndQuery = NULL;
PFNGLENDTRANSFORMFEEDBACKPROC glad_gles30_glEndTransformFeedback = NULL;
PFNGLFENCESYNCPROC glad_gles30_glFenceSync = NULL;
PFNGLFINISHPROC glad_gles30_glFinish = NULL;
PFNGLFLUSHPROC glad_gles30_glFlush = NULL;
PFNGLFLUSHMAPPEDBUFFERRANGEPROC glad_gles30_glFlushMappedBufferRange = NULL;
PFNGLFRAMEBUFFERRENDERBUFFERPROC glad_gles30_glFramebufferRenderbuffer = NULL;
PFNGLFRAMEBUFFERTEXTURE2DPROC glad_gles30_glFramebufferTexture2D = NULL;
PFNGLFRAMEBUFFERTEXTURELAYERPROC glad_gles30_glFramebufferTextureLayer = NULL;
PFNGLFRONTFACEPROC glad_gles30_glFrontFace = NULL;
PFNGLGENBUFFERSPROC glad_gles30_glGenBuffers = NULL;
PFNGLGENFRAMEBUFFERSPROC glad_gles30_glGenFramebuffers = NULL;
PFNGLGENQUERIESPROC glad_gles30_glGenQueries = NULL;
PFNGLGENRENDERBUFFERSPROC glad_gles30_glGenRenderbuffers = NULL;
PFNGLGENSAMPLERSPROC glad_gles30_glGenSamplers = NULL;
PFNGLGENTEXTURESPROC glad_gles30_glGenTextures = NULL;
PFNGLGENTRANSFORMFEEDBACKSPROC glad_gles30_glGenTransformFeedbacks = NULL;
PFNGLGENVERTEXARRAYSPROC glad_gles30_glGenVertexArrays = NULL;
PFNGLGENERATEMIPMAPPROC glad_gles30_glGenerateMipmap = NULL;
PFNGLGETACTIVEATTRIBPROC glad_gles30_glGetActiveAttrib = NULL;
PFNGLGETACTIVEUNIFORMPROC glad_gles30_glGetActiveUniform = NULL;
PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC glad_gles30_glGetActiveUniformBlockName = NULL;
PFNGLGETACTIVEUNIFORMBLOCKIVPROC glad_gles30_glGetActiveUniformBlockiv = NULL;
PFNGLGETACTIVEUNIFORMSIVPROC glad_gles30_glGetActiveUniformsiv = NULL;
PFNGLGETATTACHEDSHADERSPROC glad_gles30_glGetAttachedShaders = NULL;
PFNGLGETATTRIBLOCATIONPROC glad_gles30_glGetAttribLocation = NULL;
PFNGLGETBOOLEANVPROC glad_gles30_glGetBooleanv = NULL;
PFNGLGETBUFFERPARAMETERI64VPROC glad_gles30_glGetBufferParameteri64v = NULL;
PFNGLGETBUFFERPARAMETERIVPROC glad_gles30_glGetBufferParameteriv = NULL;
PFNGLGETBUFFERPOINTERVPROC glad_gles30_glGetBufferPointerv = NULL;
PFNGLGETERRORPROC glad_gles30_glGetError = NULL;
PFNGLGETFLOATVPROC glad_gles30_glGetFloatv = NULL;
PFNGLGETFRAGDATALOCATIONPROC glad_gles30_glGetFragDataLocation = NULL;
PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC glad_gles30_glGetFramebufferAttachmentParameteriv = NULL;
PFNGLGETINTEGER64I_VPROC glad_gles30_glGetInteger64i_v = NULL;
PFNGLGETINTEGER64VPROC glad_gles30_glGetInteger64v = NULL;
PFNGLGETINTEGERI_VPROC glad_gles30_glGetIntegeri_v = NULL;
PFNGLGETINTEGERVPROC glad_gles30_glGetIntegerv = NULL;
PFNGLGETINTERNALFORMATIVPROC glad_gles30_glGetInternalformativ = NULL;
PFNGLGETPROGRAMBINARYPROC glad_gles30_glGetProgramBinary = NULL;
PFNGLGETPROGRAMINFOLOGPROC glad_gles30_glGetProgramInfoLog = NULL;
PFNGLGETPROGRAMIVPROC glad_gles30_glGetProgramiv = NULL;
PFNGLGETQUERYOBJECTUIVPROC glad_gles30_glGetQueryObjectuiv = NULL;
PFNGLGETQUERYIVPROC glad_gles30_glGetQueryiv = NULL;
PFNGLGETRENDERBUFFERPARAMETERIVPROC glad_gles30_glGetRenderbufferParameteriv = NULL;
PFNGLGETSAMPLERPARAMETERFVPROC glad_gles30_glGetSamplerParameterfv = NULL;
PFNGLGETSAMPLERPARAMETERIVPROC glad_gles30_glGetSamplerParameteriv = NULL;
PFNGLGETSHADERINFOLOGPROC glad_gles30_glGetShaderInfoLog = NULL;
PFNGLGETSHADERPRECISIONFORMATPROC glad_gles30_glGetShaderPrecisionFormat = NULL;
PFNGLGETSHADERSOURCEPROC glad_gles30_glGetShaderSource = NULL;
PFNGLGETSHADERIVPROC glad_gles30_glGetShaderiv = NULL;
PFNGLGETSTRINGPROC glad_gles30_glGetString = NULL;
PFNGLGETSTRINGIPROC glad_gles30_glGetStringi = NULL;
PFNGLGETSYNCIVPROC glad_gles30_glGetSynciv = NULL;
PFNGLGETTEXPARAMETERFVPROC glad_gles30_glGetTexParameterfv = NULL;
PFNGLGETTEXPARAMETERIVPROC glad_gles30_glGetTexParameteriv = NULL;
PFNGLGETTRANSFORMFEEDBACKVARYINGPROC glad_gles30_glGetTransformFeedbackVarying = NULL;
PFNGLGETUNIFORMBLOCKINDEXPROC glad_gles30_glGetUniformBlockIndex = NULL;
PFNGLGETUNIFORMINDICESPROC glad_gles30_glGetUniformIndices = NULL;
PFNGLGETUNIFORMLOCATIONPROC glad_gles30_glGetUniformLocation = NULL;
PFNGLGETUNIFORMFVPROC glad_gles30_glGetUniformfv = NULL;
PFNGLGETUNIFORMIVPROC glad_gles30_glGetUniformiv = NULL;
PFNGLGETUNIFORMUIVPROC glad_gles30_glGetUniformuiv = NULL;
PFNGLGETVERTEXATTRIBIIVPROC glad_gles30_glGetVertexAttribIiv = NULL;
PFNGLGETVERTEXATTRIBIUIVPROC glad_gles30_glGetVertexAttribIuiv = NULL;
PFNGLGETVERTEXATTRIBPOINTERVPROC glad_gles30_glGetVertexAttribPointerv = NULL;
PFNGLGETVERTEXATTRIBFVPROC glad_gles30_glGetVertexAttribfv = NULL;
PFNGLGETVERTEXATTRIBIVPROC glad_gles30_glGetVertexAttribiv = NULL;
PFNGLHINTPROC glad_gles30_glHint = NULL;
PFNGLINVALIDATEFRAMEBUFFERPROC glad_gles30_glInvalidateFramebuffer = NULL;
PFNGLINVALIDATESUBFRAMEBUFFERPROC glad_gles30_glInvalidateSubFramebuffer = NULL;
PFNGLISBUFFERPROC glad_gles30_glIsBuffer = NULL;
PFNGLISENABLEDPROC glad_gles30_glIsEnabled = NULL;
PFNGLISFRAMEBUFFERPROC glad_gles30_glIsFramebuffer = NULL;
PFNGLISPROGRAMPROC glad_gles30_glIsProgram = NULL;
PFNGLISQUERYPROC glad_gles30_glIsQuery = NULL;
PFNGLISRENDERBUFFERPROC glad_gles30_glIsRenderbuffer = NULL;
PFNGLISSAMPLERPROC glad_gles30_glIsSampler = NULL;
PFNGLISSHADERPROC glad_gles30_glIsShader = NULL;
PFNGLISSYNCPROC glad_gles30_glIsSync = NULL;
PFNGLISTEXTUREPROC glad_gles30_glIsTexture = NULL;
PFNGLISTRANSFORMFEEDBACKPROC glad_gles30_glIsTransformFeedback = NULL;
PFNGLISVERTEXARRAYPROC glad_gles30_glIsVertexArray = NULL;
PFNGLLINEWIDTHPROC glad_gles30_glLineWidth = NULL;
PFNGLLINKPROGRAMPROC glad_gles30_glLinkProgram = NULL;
PFNGLMAPBUFFERRANGEPROC glad_gles30_glMapBufferRange = NULL;
PFNGLPAUSETRANSFORMFEEDBACKPROC glad_gles30_glPauseTransformFeedback = NULL;
PFNGLPIXELSTOREIPROC glad_gles30_glPixelStorei = NULL;
PFNGLPOLYGONOFFSETPROC glad_gles30_glPolygonOffset = NULL;
PFNGLPROGRAMBINARYPROC glad_gles30_glProgramBinary = NULL;
PFNGLPROGRAMPARAMETERIPROC glad_gles30_glProgramParameteri = NULL;
PFNGLREADBUFFERPROC glad_gles30_glReadBuffer = NULL;
PFNGLREADPIXELSPROC glad_gles30_glReadPixels = NULL;
PFNGLRELEASESHADERCOMPILERPROC glad_gles30_glReleaseShaderCompiler = NULL;
PFNGLRENDERBUFFERSTORAGEPROC glad_gles30_glRenderbufferStorage = NULL;
PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC glad_gles30_glRenderbufferStorageMultisample = NULL;
PFNGLRESUMETRANSFORMFEEDBACKPROC glad_gles30_glResumeTransformFeedback = NULL;
PFNGLSAMPLECOVERAGEPROC glad_gles30_glSampleCoverage = NULL;
PFNGLSAMPLERPARAMETERFPROC glad_gles30_glSamplerParameterf = NULL;
PFNGLSAMPLERPARAMETERFVPROC glad_gles30_glSamplerParameterfv = NULL;
PFNGLSAMPLERPARAMETERIPROC glad_gles30_glSamplerParameteri = NULL;
PFNGLSAMPLERPARAMETERIVPROC glad_gles30_glSamplerParameteriv = NULL;
PFNGLSCISSORPROC glad_gles30_glScissor = NULL;
PFNGLSHADERBINARYPROC glad_gles30_glShaderBinary = NULL;
PFNGLSHADERSOURCEPROC glad_gles30_glShaderSource = NULL;
PFNGLSTENCILFUNCPROC glad_gles30_glStencilFunc = NULL;
PFNGLSTENCILFUNCSEPARATEPROC glad_gles30_glStencilFuncSeparate = NULL;
PFNGLSTENCILMASKPROC glad_gles30_glStencilMask = NULL;
PFNGLSTENCILMASKSEPARATEPROC glad_gles30_glStencilMaskSeparate = NULL;
PFNGLSTENCILOPPROC glad_gles30_glStencilOp = NULL;
PFNGLSTENCILOPSEPARATEPROC glad_gles30_glStencilOpSeparate = NULL;
PFNGLTEXIMAGE2DPROC glad_gles30_glTexImage2D = NULL;
PFNGLTEXIMAGE3DPROC glad_gles30_glTexImage3D = NULL;
PFNGLTEXPARAMETERFPROC glad_gles30_glTexParameterf = NULL;
PFNGLTEXPARAMETERFVPROC glad_gles30_glTexParameterfv = NULL;
PFNGLTEXPARAMETERIPROC glad_gles30_glTexParameteri = NULL;
PFNGLTEXPARAMETERIVPROC glad_gles30_glTexParameteriv = NULL;
PFNGLTEXSTORAGE2DPROC glad_gles30_glTexStorage2D = NULL;
PFNGLTEXSTORAGE3DPROC glad_gles30_glTexStorage3D = NULL;
PFNGLTEXSUBIMAGE2DPROC glad_gles30_glTexSubImage2D = NULL;
PFNGLTEXSUBIMAGE3DPROC glad_gles30_glTexSubImage3D = NULL;
PFNGLTRANSFORMFEEDBACKVARYINGSPROC glad_gles30_glTransformFeedbackVaryings = NULL;
PFNGLUNIFORM1FPROC glad_gles30_glUniform1f = NULL;
PFNGLUNIFORM1FVPROC glad_gles30_glUniform1fv = NULL;
PFNGLUNIFORM1IPROC glad_gles30_glUniform1i = NULL;
PFNGLUNIFORM1IVPROC glad_gles30_glUniform1iv = NULL;
PFNGLUNIFORM1UIPROC glad_gles30_glUniform1ui = NULL;
PFNGLUNIFORM1UIVPROC glad_gles30_glUniform1uiv = NULL;
PFNGLUNIFORM2FPROC glad_gles30_glUniform2f = NULL;
PFNGLUNIFORM2FVPROC glad_gles30_glUniform2fv = NULL;
PFNGLUNIFORM2IPROC glad_gles30_glUniform2i = NULL;
PFNGLUNIFORM2IVPROC glad_gles30_glUniform2iv = NULL;
PFNGLUNIFORM2UIPROC glad_gles30_glUniform2ui = NULL;
PFNGLUNIFORM2UIVPROC glad_gles30_glUniform2uiv = NULL;
PFNGLUNIFORM3FPROC glad_gles30_glUniform3f = NULL;
PFNGLUNIFORM3FVPROC glad_gles30_glUniform3fv = NULL;
PFNGLUNIFORM3IPROC glad_gles30_glUniform3i = NULL;
PFNGLUNIFORM3IVPROC glad_gles30_glUniform3iv = NULL;
PFNGLUNIFORM3UIPROC glad_gles30_glUniform3ui = NULL;
PFNGLUNIFORM3UIVPROC glad_gles30_glUniform3uiv = NULL;
PFNGLUNIFORM4FPROC glad_gles30_glUniform4f = NULL;
PFNGLUNIFORM4FVPROC glad_gles30_glUniform4fv = NULL;
PFNGLUNIFORM4IPROC glad_gles30_glUniform4i = NULL;
PFNGLUNIFORM4IVPROC glad_gles30_glUniform4iv = NULL;
PFNGLUNIFORM4UIPROC glad_gles30_glUniform4ui = NULL;
PFNGLUNIFORM4UIVPROC glad_gles30_glUniform4uiv = NULL;
PFNGLUNIFORMBLOCKBINDINGPROC glad_gles30_glUniformBlockBinding = NULL;
PFNGLUNIFORMMATRIX2FVPROC glad_gles30_glUniformMatrix2fv = NULL;
PFNGLUNIFORMMATRIX2X3FVPROC glad_gles30_glUniformMatrix2x3fv = NULL;
PFNGLUNIFORMMATRIX2X4FVPROC glad_gles30_glUniformMatrix2x4fv = NULL;
PFNGLUNIFORMMATRIX3FVPROC glad_gles30_glUniformMatrix3fv = NULL;
PFNGLUNIFORMMATRIX3X2FVPROC glad_gles30_glUniformMatrix3x2fv = NULL;
PFNGLUNIFORMMATRIX3X4FVPROC glad_gles30_glUniformMatrix3x4fv = NULL;
PFNGLUNIFORMMATRIX4FVPROC glad_gles30_glUniformMatrix4fv = NULL;
PFNGLUNIFORMMATRIX4X2FVPROC glad_gles30_glUniformMatrix4x2fv = NULL;
PFNGLUNIFORMMATRIX4X3FVPROC glad_gles30_glUniformMatrix4x3fv = NULL;
PFNGLUNMAPBUFFERPROC glad_gles30_glUnmapBuffer = NULL;
PFNGLUSEPROGRAMPROC glad_gles30_glUseProgram = NULL;
PFNGLVALIDATEPROGRAMPROC glad_gles30_glValidateProgram = NULL;
PFNGLVERTEXATTRIB1FPROC glad_gles30_glVertexAttrib1f = NULL;
PFNGLVERTEXATTRIB1FVPROC glad_gles30_glVertexAttrib1fv = NULL;
PFNGLVERTEXATTRIB2FPROC glad_gles30_glVertexAttrib2f = NULL;
PFNGLVERTEXATTRIB2FVPROC glad_gles30_glVertexAttrib2fv = NULL;
PFNGLVERTEXATTRIB3FPROC glad_gles30_glVertexAttrib3f = NULL;
PFNGLVERTEXATTRIB3FVPROC glad_gles30_glVertexAttrib3fv = NULL;
PFNGLVERTEXATTRIB4FPROC glad_gles30_glVertexAttrib4f = NULL;
PFNGLVERTEXATTRIB4FVPROC glad_gles30_glVertexAttrib4fv = NULL;
PFNGLVERTEXATTRIBDIVISORPROC glad_gles30_glVertexAttribDivisor = NULL;
PFNGLVERTEXATTRIBI4IPROC glad_gles30_glVertexAttribI4i = NULL;
PFNGLVERTEXATTRIBI4IVPROC glad_gles30_glVertexAttribI4iv = NULL;
PFNGLVERTEXATTRIBI4UIPROC glad_gles30_glVertexAttribI4ui = NULL;
PFNGLVERTEXATTRIBI4UIVPROC glad_gles30_glVertexAttribI4uiv = NULL;
PFNGLVERTEXATTRIBIPOINTERPROC glad_gles30_glVertexAttribIPointer = NULL;
PFNGLVERTEXATTRIBPOINTERPROC glad_gles30_glVertexAttribPointer = NULL;
PFNGLVIEWPORTPROC glad_gles30_glViewport = NULL;
PFNGLWAITSYNCPROC glad_gles30_glWaitSync = NULL;


static void glad_gles30_gl_load_GL_ES_VERSION_2_0( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ES_VERSION_2_0) return;
    glad_gles30_glActiveTexture = (PFNGLACTIVETEXTUREPROC) load(userptr, "glActiveTexture");
    glad_gles30_glAttachShader = (PFNGLATTACHSHADERPROC) load(userptr, "glAttachShader");
    glad_gles30_glBindAttribLocation = (PFNGLBINDATTRIBLOCATIONPROC) load(userptr, "glBindAttribLocation");
    glad_gles30_glBindBuffer = (PFNGLBINDBUFFERPROC) load(userptr, "glBindBuffer");
    glad_gles30_glBindFramebuffer = (PFNGLBINDFRAMEBUFFERPROC) load(userptr, "glBindFramebuffer");
    glad_gles30_glBindRenderbuffer = (PFNGLBINDRENDERBUFFERPROC) load(userptr, "glBindRenderbuffer");
    glad_gles30_glBindTexture = (PFNGLBINDTEXTUREPROC) load(userptr, "glBindTexture");
    glad_gles30_glBlendColor = (PFNGLBLENDCOLORPROC) load(userptr, "glBlendColor");
    glad_gles30_glBlendEquation = (PFNGLBLENDEQUATIONPROC) load(userptr, "glBlendEquation");
    glad_gles30_glBlendEquationSeparate = (PFNGLBLENDEQUATIONSEPARATEPROC) load(userptr, "glBlendEquationSeparate");
    glad_gles30_glBlendFunc = (PFNGLBLENDFUNCPROC) load(userptr, "glBlendFunc");
    glad_gles30_glBlendFuncSeparate = (PFNGLBLENDFUNCSEPARATEPROC) load(userptr, "glBlendFuncSeparate");
    glad_gles30_glBufferData = (PFNGLBUFFERDATAPROC) load(userptr, "glBufferData");
    glad_gles30_glBufferSubData = (PFNGLBUFFERSUBDATAPROC) load(userptr, "glBufferSubData");
    glad_gles30_glCheckFramebufferStatus = (PFNGLCHECKFRAMEBUFFERSTATUSPROC) load(userptr, "glCheckFramebufferStatus");
    glad_gles30_glClear = (PFNGLCLEARPROC) load(userptr, "glClear");
    glad_gles30_glClearColor = (PFNGLCLEARCOLORPROC) load(userptr, "glClearColor");
    glad_gles30_glClearDepthf = (PFNGLCLEARDEPTHFPROC) load(userptr, "glClearDepthf");
    glad_gles30_glClearStencil = (PFNGLCLEARSTENCILPROC) load(userptr, "glClearStencil");
    glad_gles30_glColorMask = (PFNGLCOLORMASKPROC) load(userptr, "glColorMask");
    glad_gles30_glCompileShader = (PFNGLCOMPILESHADERPROC) load(userptr, "glCompileShader");
    glad_gles30_glCompressedTexImage2D = (PFNGLCOMPRESSEDTEXIMAGE2DPROC) load(userptr, "glCompressedTexImage2D");
    glad_gles30_glCompressedTexSubImage2D = (PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC) load(userptr, "glCompressedTexSubImage2D");
    glad_gles30_glCopyTexImage2D = (PFNGLCOPYTEXIMAGE2DPROC) load(userptr, "glCopyTexImage2D");
    glad_gles30_glCopyTexSubImage2D = (PFNGLCOPYTEXSUBIMAGE2DPROC) load(userptr, "glCopyTexSubImage2D");
    glad_gles30_glCreateProgram = (PFNGLCREATEPROGRAMPROC) load(userptr, "glCreateProgram");
    glad_gles30_glCreateShader = (PFNGLCREATESHADERPROC) load(userptr, "glCreateShader");
    glad_gles30_glCullFace = (PFNGLCULLFACEPROC) load(userptr, "glCullFace");
    glad_gles30_glDeleteBuffers = (PFNGLDELETEBUFFERSPROC) load(userptr, "glDeleteBuffers");
    glad_gles30_glDeleteFramebuffers = (PFNGLDELETEFRAMEBUFFERSPROC) load(userptr, "glDeleteFramebuffers");
    glad_gles30_glDeleteProgram = (PFNGLDELETEPROGRAMPROC) load(userptr, "glDeleteProgram");
    glad_gles30_glDeleteRenderbuffers = (PFNGLDELETERENDERBUFFERSPROC) load(userptr, "glDeleteRenderbuffers");
    glad_gles30_glDeleteShader = (PFNGLDELETESHADERPROC) load(userptr, "glDeleteShader");
    glad_gles30_glDeleteTextures = (PFNGLDELETETEXTURESPROC) load(userptr, "glDeleteTextures");
    glad_gles30_glDepthFunc = (PFNGLDEPTHFUNCPROC) load(userptr, "glDepthFunc");
    glad_gles30_glDepthMask = (PFNGLDEPTHMASKPROC) load(userptr, "glDepthMask");
    glad_gles30_glDepthRangef = (PFNGLDEPTHRANGEFPROC) load(userptr, "glDepthRangef");
    glad_gles30_glDetachShader = (PFNGLDETACHSHADERPROC) load(userptr, "glDetachShader");
    glad_gles30_glDisable = (PFNGLDISABLEPROC) load(userptr, "glDisable");
    glad_gles30_glDisableVertexAttribArray = (PFNGLDISABLEVERTEXATTRIBARRAYPROC) load(userptr, "glDisableVertexAttribArray");
    glad_gles30_glDrawArrays = (PFNGLDRAWARRAYSPROC) load(userptr, "glDrawArrays");
    glad_gles30_glDrawElements = (PFNGLDRAWELEMENTSPROC) load(userptr, "glDrawElements");
    glad_gles30_glEnable = (PFNGLENABLEPROC) load(userptr, "glEnable");
    glad_gles30_glEnableVertexAttribArray = (PFNGLENABLEVERTEXATTRIBARRAYPROC) load(userptr, "glEnableVertexAttribArray");
    glad_gles30_glFinish = (PFNGLFINISHPROC) load(userptr, "glFinish");
    glad_gles30_glFlush = (PFNGLFLUSHPROC) load(userptr, "glFlush");
    glad_gles30_glFramebufferRenderbuffer = (PFNGLFRAMEBUFFERRENDERBUFFERPROC) load(userptr, "glFramebufferRenderbuffer");
    glad_gles30_glFramebufferTexture2D = (PFNGLFRAMEBUFFERTEXTURE2DPROC) load(userptr, "glFramebufferTexture2D");
    glad_gles30_glFrontFace = (PFNGLFRONTFACEPROC) load(userptr, "glFrontFace");
    glad_gles30_glGenBuffers = (PFNGLGENBUFFERSPROC) load(userptr, "glGenBuffers");
    glad_gles30_glGenFramebuffers = (PFNGLGENFRAMEBUFFERSPROC) load(userptr, "glGenFramebuffers");
    glad_gles30_glGenRenderbuffers = (PFNGLGENRENDERBUFFERSPROC) load(userptr, "glGenRenderbuffers");
    glad_gles30_glGenTextures = (PFNGLGENTEXTURESPROC) load(userptr, "glGenTextures");
    glad_gles30_glGenerateMipmap = (PFNGLGENERATEMIPMAPPROC) load(userptr, "glGenerateMipmap");
    glad_gles30_glGetActiveAttrib = (PFNGLGETACTIVEATTRIBPROC) load(userptr, "glGetActiveAttrib");
    glad_gles30_glGetActiveUniform = (PFNGLGETACTIVEUNIFORMPROC) load(userptr, "glGetActiveUniform");
    glad_gles30_glGetAttachedShaders = (PFNGLGETATTACHEDSHADERSPROC) load(userptr, "glGetAttachedShaders");
    glad_gles30_glGetAttribLocation = (PFNGLGETATTRIBLOCATIONPROC) load(userptr, "glGetAttribLocation");
    glad_gles30_glGetBooleanv = (PFNGLGETBOOLEANVPROC) load(userptr, "glGetBooleanv");
    glad_gles30_glGetBufferParameteriv = (PFNGLGETBUFFERPARAMETERIVPROC) load(userptr, "glGetBufferParameteriv");
    glad_gles30_glGetError = (PFNGLGETERRORPROC) load(userptr, "glGetError");
    glad_gles30_glGetFloatv = (PFNGLGETFLOATVPROC) load(userptr, "glGetFloatv");
    glad_gles30_glGetFramebufferAttachmentParameteriv = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC) load(userptr, "glGetFramebufferAttachmentParameteriv");
    glad_gles30_glGetIntegerv = (PFNGLGETINTEGERVPROC) load(userptr, "glGetIntegerv");
    glad_gles30_glGetProgramInfoLog = (PFNGLGETPROGRAMINFOLOGPROC) load(userptr, "glGetProgramInfoLog");
    glad_gles30_glGetProgramiv = (PFNGLGETPROGRAMIVPROC) load(userptr, "glGetProgramiv");
    glad_gles30_glGetRenderbufferParameteriv = (PFNGLGETRENDERBUFFERPARAMETERIVPROC) load(userptr, "glGetRenderbufferParameteriv");
    glad_gles30_glGetShaderInfoLog = (PFNGLGETSHADERINFOLOGPROC) load(userptr, "glGetShaderInfoLog");
    glad_gles30_glGetShaderPrecisionFormat = (PFNGLGETSHADERPRECISIONFORMATPROC) load(userptr, "glGetShaderPrecisionFormat");
    glad_gles30_glGetShaderSource = (PFNGLGETSHADERSOURCEPROC) load(userptr, "glGetShaderSource");
    glad_gles30_glGetShaderiv = (PFNGLGETSHADERIVPROC) load(userptr, "glGetShaderiv");
    glad_gles30_glGetString = (PFNGLGETSTRINGPROC) load(userptr, "glGetString");
    glad_gles30_glGetTexParameterfv = (PFNGLGETTEXPARAMETERFVPROC) load(userptr, "glGetTexParameterfv");
    glad_gles30_glGetTexParameteriv = (PFNGLGETTEXPARAMETERIVPROC) load(userptr, "glGetTexParameteriv");
    glad_gles30_glGetUniformLocation = (PFNGLGETUNIFORMLOCATIONPROC) load(userptr, "glGetUniformLocation");
    glad_gles30_glGetUniformfv = (PFNGLGETUNIFORMFVPROC) load(userptr, "glGetUniformfv");
    glad_gles30_glGetUniformiv = (PFNGLGETUNIFORMIVPROC) load(userptr, "glGetUniformiv");
    glad_gles30_glGetVertexAttribPointerv = (PFNGLGETVERTEXATTRIBPOINTERVPROC) load(userptr, "glGetVertexAttribPointerv");
    glad_gles30_glGetVertexAttribfv = (PFNGLGETVERTEXATTRIBFVPROC) load(userptr, "glGetVertexAttribfv");
    glad_gles30_glGetVertexAttribiv = (PFNGLGETVERTEXATTRIBIVPROC) load(userptr, "glGetVertexAttribiv");
    glad_gles30_glHint = (PFNGLHINTPROC) load(userptr, "glHint");
    glad_gles30_glIsBuffer = (PFNGLISBUFFERPROC) load(userptr, "glIsBuffer");
    glad_gles30_glIsEnabled = (PFNGLISENABLEDPROC) load(userptr, "glIsEnabled");
    glad_gles30_glIsFramebuffer = (PFNGLISFRAMEBUFFERPROC) load(userptr, "glIsFramebuffer");
    glad_gles30_glIsProgram = (PFNGLISPROGRAMPROC) load(userptr, "glIsProgram");
    glad_gles30_glIsRenderbuffer = (PFNGLISRENDERBUFFERPROC) load(userptr, "glIsRenderbuffer");
    glad_gles30_glIsShader = (PFNGLISSHADERPROC) load(userptr, "glIsShader");
    glad_gles30_glIsTexture = (PFNGLISTEXTUREPROC) load(userptr, "glIsTexture");
    glad_gles30_glLineWidth = (PFNGLLINEWIDTHPROC) load(userptr, "glLineWidth");
    glad_gles30_glLinkProgram = (PFNGLLINKPROGRAMPROC) load(userptr, "glLinkProgram");
    glad_gles30_glPixelStorei = (PFNGLPIXELSTOREIPROC) load(userptr, "glPixelStorei");
    glad_gles30_glPolygonOffset = (PFNGLPOLYGONOFFSETPROC) load(userptr, "glPolygonOffset");
    glad_gles30_glReadPixels = (PFNGLREADPIXELSPROC) load(userptr, "glReadPixels");
    glad_gles30_glReleaseShaderCompiler = (PFNGLRELEASESHADERCOMPILERPROC) load(userptr, "glReleaseShaderCompiler");
    glad_gles30_glRenderbufferStorage = (PFNGLRENDERBUFFERSTORAGEPROC) load(userptr, "glRenderbufferStorage");
    glad_gles30_glSampleCoverage = (PFNGLSAMPLECOVERAGEPROC) load(userptr, "glSampleCoverage");
    glad_gles30_glScissor = (PFNGLSCISSORPROC) load(userptr, "glScissor");
    glad_gles30_glShaderBinary = (PFNGLSHADERBINARYPROC) load(userptr, "glShaderBinary");
    glad_gles30_glShaderSource = (PFNGLSHADERSOURCEPROC) load(userptr, "glShaderSource");
    glad_gles30_glStencilFunc = (PFNGLSTENCILFUNCPROC) load(userptr, "glStencilFunc");
    glad_gles30_glStencilFuncSeparate = (PFNGLSTENCILFUNCSEPARATEPROC) load(userptr, "glStencilFuncSeparate");
    glad_gles30_glStencilMask = (PFNGLSTENCILMASKPROC) load(userptr, "glStencilMask");
    glad_gles30_glStencilMaskSeparate = (PFNGLSTENCILMASKSEPARATEPROC) load(userptr, "glStencilMaskSeparate");
    glad_gles30_glStencilOp = (PFNGLSTENCILOPPROC) load(userptr, "glStencilOp");
    glad_gles30_glStencilOpSeparate = (PFNGLSTENCILOPSEPARATEPROC) load(userptr, "glStencilOpSeparate");
    glad_gles30_glTexImage2D = (PFNGLTEXIMAGE2DPROC) load(userptr, "glTexImage2D");
    glad_gles30_glTexParameterf = (PFNGLTEXPARAMETERFPROC) load(userptr, "glTexParameterf");
    glad_gles30_glTexParameterfv = (PFNGLTEXPARAMETERFVPROC) load(userptr, "glTexParameterfv");
    glad_gles30_glTexParameteri = (PFNGLTEXPARAMETERIPROC) load(userptr, "glTexParameteri");
    glad_gles30_glTexParameteriv = (PFNGLTEXPARAMETERIVPROC) load(userptr, "glTexParameteriv");
    glad_gles30_glTexSubImage2D = (PFNGLTEXSUBIMAGE2DPROC) load(userptr, "glTexSubImage2D");
    glad_gles30_glUniform1f = (PFNGLUNIFORM1FPROC) load(userptr, "glUniform1f");
    glad_gles30_glUniform1fv = (PFNGLUNIFORM1FVPROC) load(userptr, "glUniform1fv");
    glad_gles30_glUniform1i = (PFNGLUNIFORM1IPROC) load(userptr, "glUniform1i");
    glad_gles30_glUniform1iv = (PFNGLUNIFORM1IVPROC) load(userptr, "glUniform1iv");
    glad_gles30_glUniform2f = (PFNGLUNIFORM2FPROC) load(userptr, "glUniform2f");
    glad_gles30_glUniform2fv = (PFNGLUNIFORM2FVPROC) load(userptr, "glUniform2fv");
    glad_gles30_glUniform2i = (PFNGLUNIFORM2IPROC) load(userptr, "glUniform2i");
    glad_gles30_glUniform2iv = (PFNGLUNIFORM2IVPROC) load(userptr, "glUniform2iv");
    glad_gles30_glUniform3f = (PFNGLUNIFORM3FPROC) load(userptr, "glUniform3f");
    glad_gles30_glUniform3fv = (PFNGLUNIFORM3FVPROC) load(userptr, "glUniform3fv");
    glad_gles30_glUniform3i = (PFNGLUNIFORM3IPROC) load(userptr, "glUniform3i");
    glad_gles30_glUniform3iv = (PFNGLUNIFORM3IVPROC) load(userptr, "glUniform3iv");
    glad_gles30_glUniform4f = (PFNGLUNIFORM4FPROC) load(userptr, "glUniform4f");
    glad_gles30_glUniform4fv = (PFNGLUNIFORM4FVPROC) load(userptr, "glUniform4fv");
    glad_gles30_glUniform4i = (PFNGLUNIFORM4IPROC) load(userptr, "glUniform4i");
    glad_gles30_glUniform4iv = (PFNGLUNIFORM4IVPROC) load(userptr, "glUniform4iv");
    glad_gles30_glUniformMatrix2fv = (PFNGLUNIFORMMATRIX2FVPROC) load(userptr, "glUniformMatrix2fv");
    glad_gles30_glUniformMatrix3fv = (PFNGLUNIFORMMATRIX3FVPROC) load(userptr, "glUniformMatrix3fv");
    glad_gles30_glUniformMatrix4fv = (PFNGLUNIFORMMATRIX4FVPROC) load(userptr, "glUniformMatrix4fv");
    glad_gles30_glUseProgram = (PFNGLUSEPROGRAMPROC) load(userptr, "glUseProgram");
    glad_gles30_glValidateProgram = (PFNGLVALIDATEPROGRAMPROC) load(userptr, "glValidateProgram");
    glad_gles30_glVertexAttrib1f = (PFNGLVERTEXATTRIB1FPROC) load(userptr, "glVertexAttrib1f");
    glad_gles30_glVertexAttrib1fv = (PFNGLVERTEXATTRIB1FVPROC) load(userptr, "glVertexAttrib1fv");
    glad_gles30_glVertexAttrib2f = (PFNGLVERTEXATTRIB2FPROC) load(userptr, "glVertexAttrib2f");
    glad_gles30_glVertexAttrib2fv = (PFNGLVERTEXATTRIB2FVPROC) load(userptr, "glVertexAttrib2fv");
    glad_gles30_glVertexAttrib3f = (PFNGLVERTEXATTRIB3FPROC) load(userptr, "glVertexAttrib3f");
    glad_gles30_glVertexAttrib3fv = (PFNGLVERTEXATTRIB3FVPROC) load(userptr, "glVertexAttrib3fv");
    glad_gles30_glVertexAttrib4f = (PFNGLVERTEXATTRIB4FPROC) load(userptr, "glVertexAttrib4f");
    glad_gles30_glVertexAttrib4fv = (PFNGLVERTEXATTRIB4FVPROC) load(userptr, "glVertexAttrib4fv");
    glad_gles30_glVertexAttribPointer = (PFNGLVERTEXATTRIBPOINTERPROC) load(userptr, "glVertexAttribPointer");
    glad_gles30_glViewport = (PFNGLVIEWPORTPROC) load(userptr, "glViewport");
}
static void glad_gles30_gl_load_GL_ES_VERSION_3_0( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ES_VERSION_3_0) return;
    glad_gles30_glBeginQuery = (PFNGLBEGINQUERYPROC) load(userptr, "glBeginQuery");
    glad_gles30_glBeginTransformFeedback = (PFNGLBEGINTRANSFORMFEEDBACKPROC) load(userptr, "glBeginTransformFeedback");
    glad_gles30_glBindBufferBase = (PFNGLBINDBUFFERBASEPROC) load(userptr, "glBindBufferBase");
    glad_gles30_glBindBufferRange = (PFNGLBINDBUFFERRANGEPROC) load(userptr, "glBindBufferRange");
    glad_gles30_glBindSampler = (PFNGLBINDSAMPLERPROC) load(userptr, "glBindSampler");
    glad_gles30_glBindTransformFeedback = (PFNGLBINDTRANSFORMFEEDBACKPROC) load(userptr, "glBindTransformFeedback");
    glad_gles30_glBindVertexArray = (PFNGLBINDVERTEXARRAYPROC) load(userptr, "glBindVertexArray");
    glad_gles30_glBlitFramebuffer = (PFNGLBLITFRAMEBUFFERPROC) load(userptr, "glBlitFramebuffer");
    glad_gles30_glClearBufferfi = (PFNGLCLEARBUFFERFIPROC) load(userptr, "glClearBufferfi");
    glad_gles30_glClearBufferfv = (PFNGLCLEARBUFFERFVPROC) load(userptr, "glClearBufferfv");
    glad_gles30_glClearBufferiv = (PFNGLCLEARBUFFERIVPROC) load(userptr, "glClearBufferiv");
    glad_gles30_glClearBufferuiv = (PFNGLCLEARBUFFERUIVPROC) load(userptr, "glClearBufferuiv");
    glad_gles30_glClientWaitSync = (PFNGLCLIENTWAITSYNCPROC) load(userptr, "glClientWaitSync");
    glad_gles30_glCompressedTexImage3D = (PFNGLCOMPRESSEDTEXIMAGE3DPROC) load(userptr, "glCompressedTexImage3D");
    glad_gles30_glCompressedTexSubImage3D = (PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC) load(userptr, "glCompressedTexSubImage3D");
    glad_gles30_glCopyBufferSubData = (PFNGLCOPYBUFFERSUBDATAPROC) load(userptr, "glCopyBufferSubData");
    glad_gles30_glCopyTexSubImage3D = (PFNGLCOPYTEXSUBIMAGE3DPROC) load(userptr, "glCopyTexSubImage3D");
    glad_gles30_glDeleteQueries = (PFNGLDELETEQUERIESPROC) load(userptr, "glDeleteQueries");
    glad_gles30_glDeleteSamplers = (PFNGLDELETESAMPLERSPROC) load(userptr, "glDeleteSamplers");
    glad_gles30_glDeleteSync = (PFNGLDELETESYNCPROC) load(userptr, "glDeleteSync");
    glad_gles30_glDeleteTransformFeedbacks = (PFNGLDELETETRANSFORMFEEDBACKSPROC) load(userptr, "glDeleteTransformFeedbacks");
    glad_gles30_glDeleteVertexArrays = (PFNGLDELETEVERTEXARRAYSPROC) load(userptr, "glDeleteVertexArrays");
    glad_gles30_glDrawArraysInstanced = (PFNGLDRAWARRAYSINSTANCEDPROC) load(userptr, "glDrawArraysInstanced");
    glad_gles30_glDrawBuffers = (PFNGLDRAWBUFFERSPROC) load(userptr, "glDrawBuffers");
    glad_gles30_glDrawElementsInstanced = (PFNGLDRAWELEMENTSINSTANCEDPROC) load(userptr, "glDrawElementsInstanced");
    glad_gles30_glDrawRangeElements = (PFNGLDRAWRANGEELEMENTSPROC) load(userptr, "glDrawRangeElements");
    glad_gles30_glEndQuery = (PFNGLENDQUERYPROC) load(userptr, "glEndQuery");
    glad_gles30_glEndTransformFeedback = (PFNGLENDTRANSFORMFEEDBACKPROC) load(userptr, "glEndTransformFeedback");
    glad_gles30_glFenceSync = (PFNGLFENCESYNCPROC) load(userptr, "glFenceSync");
    glad_gles30_glFlushMappedBufferRange = (PFNGLFLUSHMAPPEDBUFFERRANGEPROC) load(userptr, "glFlushMappedBufferRange");
    glad_gles30_glFramebufferTextureLayer = (PFNGLFRAMEBUFFERTEXTURELAYERPROC) load(userptr, "glFramebufferTextureLayer");
    glad_gles30_glGenQueries = (PFNGLGENQUERIESPROC) load(userptr, "glGenQueries");
    glad_gles30_glGenSamplers = (PFNGLGENSAMPLERSPROC) load(userptr, "glGenSamplers");
    glad_gles30_glGenTransformFeedbacks = (PFNGLGENTRANSFORMFEEDBACKSPROC) load(userptr, "glGenTransformFeedbacks");
    glad_gles30_glGenVertexArrays = (PFNGLGENVERTEXARRAYSPROC) load(userptr, "glGenVertexArrays");
    glad_gles30_glGetActiveUniformBlockName = (PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC) load(userptr, "glGetActiveUniformBlockName");
    glad_gles30_glGetActiveUniformBlockiv = (PFNGLGETACTIVEUNIFORMBLOCKIVPROC) load(userptr, "glGetActiveUniformBlockiv");
    glad_gles30_glGetActiveUniformsiv = (PFNGLGETACTIVEUNIFORMSIVPROC) load(userptr, "glGetActiveUniformsiv");
    glad_gles30_glGetBufferParameteri64v = (PFNGLGETBUFFERPARAMETERI64VPROC) load(userptr, "glGetBufferParameteri64v");
    glad_gles30_glGetBufferPointerv = (PFNGLGETBUFFERPOINTERVPROC) load(userptr, "glGetBufferPointerv");
    glad_gles30_glGetFragDataLocation = (PFNGLGETFRAGDATALOCATIONPROC) load(userptr, "glGetFragDataLocation");
    glad_gles30_glGetInteger64i_v = (PFNGLGETINTEGER64I_VPROC) load(userptr, "glGetInteger64i_v");
    glad_gles30_glGetInteger64v = (PFNGLGETINTEGER64VPROC) load(userptr, "glGetInteger64v");
    glad_gles30_glGetIntegeri_v = (PFNGLGETINTEGERI_VPROC) load(userptr, "glGetIntegeri_v");
    glad_gles30_glGetInternalformativ = (PFNGLGETINTERNALFORMATIVPROC) load(userptr, "glGetInternalformativ");
    glad_gles30_glGetProgramBinary = (PFNGLGETPROGRAMBINARYPROC) load(userptr, "glGetProgramBinary");
    glad_gles30_glGetQueryObjectuiv = (PFNGLGETQUERYOBJECTUIVPROC) load(userptr, "glGetQueryObjectuiv");
    glad_gles30_glGetQueryiv = (PFNGLGETQUERYIVPROC) load(userptr, "glGetQueryiv");
    glad_gles30_glGetSamplerParameterfv = (PFNGLGETSAMPLERPARAMETERFVPROC) load(userptr, "glGetSamplerParameterfv");
    glad_gles30_glGetSamplerParameteriv = (PFNGLGETSAMPLERPARAMETERIVPROC) load(userptr, "glGetSamplerParameteriv");
    glad_gles30_glGetStringi = (PFNGLGETSTRINGIPROC) load(userptr, "glGetStringi");
    glad_gles30_glGetSynciv = (PFNGLGETSYNCIVPROC) load(userptr, "glGetSynciv");
    glad_gles30_glGetTransformFeedbackVarying = (PFNGLGETTRANSFORMFEEDBACKVARYINGPROC) load(userptr, "glGetTransformFeedbackVarying");
    glad_gles30_glGetUniformBlockIndex = (PFNGLGETUNIFORMBLOCKINDEXPROC) load(userptr, "glGetUniformBlockIndex");
    glad_gles30_glGetUniformIndices = (PFNGLGETUNIFORMINDICESPROC) load(userptr, "glGetUniformIndices");
    glad_gles30_glGetUniformuiv = (PFNGLGETUNIFORMUIVPROC) load(userptr, "glGetUniformuiv");
    glad_gles30_glGetVertexAttribIiv = (PFNGLGETVERTEXATTRIBIIVPROC) load(userptr, "glGetVertexAttribIiv");
    glad_gles30_glGetVertexAttribIuiv = (PFNGLGETVERTEXATTRIBIUIVPROC) load(userptr, "glGetVertexAttribIuiv");
    glad_gles30_glInvalidateFramebuffer = (PFNGLINVALIDATEFRAMEBUFFERPROC) load(userptr, "glInvalidateFramebuffer");
    glad_gles30_glInvalidateSubFramebuffer = (PFNGLINVALIDATESUBFRAMEBUFFERPROC) load(userptr, "glInvalidateSubFramebuffer");
    glad_gles30_glIsQuery = (PFNGLISQUERYPROC) load(userptr, "glIsQuery");
    glad_gles30_glIsSampler = (PFNGLISSAMPLERPROC) load(userptr, "glIsSampler");
    glad_gles30_glIsSync = (PFNGLISSYNCPROC) load(userptr, "glIsSync");
    glad_gles30_glIsTransformFeedback = (PFNGLISTRANSFORMFEEDBACKPROC) load(userptr, "glIsTransformFeedback");
    glad_gles30_glIsVertexArray = (PFNGLISVERTEXARRAYPROC) load(userptr, "glIsVertexArray");
    glad_gles30_glMapBufferRange = (PFNGLMAPBUFFERRANGEPROC) load(userptr, "glMapBufferRange");
    glad_gles30_glPauseTransformFeedback = (PFNGLPAUSETRANSFORMFEEDBACKPROC) load(userptr, "glPauseTransformFeedback");
    glad_gles30_glProgramBinary = (PFNGLPROGRAMBINARYPROC) load(userptr, "glProgramBinary");
    glad_gles30_glProgramParameteri = (PFNGLPROGRAMPARAMETERIPROC) load(userptr, "glProgramParameteri");
    glad_gles30_glReadBuffer = (PFNGLREADBUFFERPROC) load(userptr, "glReadBuffer");
    glad_gles30_glRenderbufferStorageMultisample = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC) load(userptr, "glRenderbufferStorageMultisample");
    glad_gles30_glResumeTransformFeedback = (PFNGLRESUMETRANSFORMFEEDBACKPROC) load(userptr, "glResumeTransformFeedback");
    glad_gles30_glSamplerParameterf = (PFNGLSAMPLERPARAMETERFPROC) load(userptr, "glSamplerParameterf");
    glad_gles30_glSamplerParameterfv = (PFNGLSAMPLERPARAMETERFVPROC) load(userptr, "glSamplerParameterfv");
    glad_gles30_glSamplerParameteri = (PFNGLSAMPLERPARAMETERIPROC) load(userptr, "glSamplerParameteri");
    glad_gles30_glSamplerParameteriv = (PFNGLSAMPLERPARAMETERIVPROC) load(userptr, "glSamplerParameteriv");
    glad_gles30_glTexImage3D = (PFNGLTEXIMAGE3DPROC) load(userptr, "glTexImage3D");
    glad_gles30_glTexStorage2D = (PFNGLTEXSTORAGE2DPROC) load(userptr, "glTexStorage2D");
    glad_gles30_glTexStorage3D = (PFNGLTEXSTORAGE3DPROC) load(userptr, "glTexStorage3D");
    glad_gles30_glTexSubImage3D = (PFNGLTEXSUBIMAGE3DPROC) load(userptr, "glTexSubImage3D");
    glad_gles30_glTransformFeedbackVaryings = (PFNGLTRANSFORMFEEDBACKVARYINGSPROC) load(userptr, "glTransformFeedbackVaryings");
    glad_gles30_glUniform1ui = (PFNGLUNIFORM1UIPROC) load(userptr, "glUniform1ui");
    glad_gles30_glUniform1uiv = (PFNGLUNIFORM1UIVPROC) load(userptr, "glUniform1uiv");
    glad_gles30_glUniform2ui = (PFNGLUNIFORM2UIPROC) load(userptr, "glUniform2ui");
    glad_gles30_glUniform2uiv = (PFNGLUNIFORM2UIVPROC) load(userptr, "glUniform2uiv");
    glad_gles30_glUniform3ui = (PFNGLUNIFORM3UIPROC) load(userptr, "glUniform3ui");
    glad_gles30_glUniform3uiv = (PFNGLUNIFORM3UIVPROC) load(userptr, "glUniform3uiv");
    glad_gles30_glUniform4ui = (PFNGLUNIFORM4UIPROC) load(userptr, "glUniform4ui");
    glad_gles30_glUniform4uiv = (PFNGLUNIFORM4UIVPROC) load(userptr, "glUniform4uiv");
    glad_gles30_glUniformBlockBinding = (PFNGLUNIFORMBLOCKBINDINGPROC) load(userptr, "glUniformBlockBinding");
    glad_gles30_glUniformMatrix2x3fv = (PFNGLUNIFORMMATRIX2X3FVPROC) load(userptr, "glUniformMatrix2x3fv");
    glad_gles30_glUniformMatrix2x4fv = (PFNGLUNIFORMMATRIX2X4FVPROC) load(userptr, "glUniformMatrix2x4fv");
    glad_gles30_glUniformMatrix3x2fv = (PFNGLUNIFORMMATRIX3X2FVPROC) load(userptr, "glUniformMatrix3x2fv");
    glad_gles30_glUniformMatrix3x4fv = (PFNGLUNIFORMMATRIX3X4FVPROC) load(userptr, "glUniformMatrix3x4fv");
    glad_gles30_glUniformMatrix4x2fv = (PFNGLUNIFORMMATRIX4X2FVPROC) load(userptr, "glUniformMatrix4x2fv");
    glad_gles30_glUniformMatrix4x3fv = (PFNGLUNIFORMMATRIX4X3FVPROC) load(userptr, "glUniformMatrix4x3fv");
    glad_gles30_glUnmapBuffer = (PFNGLUNMAPBUFFERPROC) load(userptr, "glUnmapBuffer");
    glad_gles30_glVertexAttribDivisor = (PFNGLVERTEXATTRIBDIVISORPROC) load(userptr, "glVertexAttribDivisor");
    glad_gles30_glVertexAttribI4i = (PFNGLVERTEXATTRIBI4IPROC) load(userptr, "glVertexAttribI4i");
    glad_gles30_glVertexAttribI4iv = (PFNGLVERTEXATTRIBI4IVPROC) load(userptr, "glVertexAttribI4iv");
    glad_gles30_glVertexAttribI4ui = (PFNGLVERTEXATTRIBI4UIPROC) load(userptr, "glVertexAttribI4ui");
    glad_gles30_glVertexAttribI4uiv = (PFNGLVERTEXATTRIBI4UIVPROC) load(userptr, "glVertexAttribI4uiv");
    glad_gles30_glVertexAttribIPointer = (PFNGLVERTEXATTRIBIPOINTERPROC) load(userptr, "glVertexAttribIPointer");
    glad_gles30_glWaitSync = (PFNGLWAITSYNCPROC) load(userptr, "glWaitSync");
}



#if defined(GL_ES_VERSION_3_0) || defined(GL_VERSION_3_0)
#define GLAD_GL_IS_SOME_NEW_VERSION 1
#else
#define GLAD_GL_IS_SOME_NEW_VERSION 0
#endif

static int glad_gles30_gl_get_extensions( int version, const char **out_exts, unsigned int *out_num_exts_i, char ***out_exts_i) {
#if GLAD_GL_IS_SOME_NEW_VERSION
    if(GLAD_VERSION_MAJOR(version) < 3) {
#else
    GLAD_UNUSED(version);
    GLAD_UNUSED(out_num_exts_i);
    GLAD_UNUSED(out_exts_i);
#endif
        if (glad_gles30_glGetString == NULL) {
            return 0;
        }
        *out_exts = (const char *)glad_gles30_glGetString(GL_EXTENSIONS);
#if GLAD_GL_IS_SOME_NEW_VERSION
    } else {
        unsigned int index = 0;
        unsigned int num_exts_i = 0;
        char **exts_i = NULL;
        if (glad_gles30_glGetStringi == NULL || glad_gles30_glGetIntegerv == NULL) {
            return 0;
        }
        glad_gles30_glGetIntegerv(GL_NUM_EXTENSIONS, (int*) &num_exts_i);
        if (num_exts_i > 0) {
            exts_i = (char **) malloc(num_exts_i * (sizeof *exts_i));
        }
        if (exts_i == NULL) {
            return 0;
        }
        for(index = 0; index < num_exts_i; index++) {
            const char *gl_str_tmp = (const char*) glad_gles30_glGetStringi(GL_EXTENSIONS, index);
            size_t len = strlen(gl_str_tmp) + 1;

            char *local_str = (char*) malloc(len * sizeof(char));
            if(local_str != NULL) {
                memcpy(local_str, gl_str_tmp, len * sizeof(char));
            }

            exts_i[index] = local_str;
        }

        *out_num_exts_i = num_exts_i;
        *out_exts_i = exts_i;
    }
#endif
    return 1;
}
static void glad_gles30_gl_free_extensions(char **exts_i, unsigned int num_exts_i) {
    if (exts_i != NULL) {
        unsigned int index;
        for(index = 0; index < num_exts_i; index++) {
            free((void *) (exts_i[index]));
        }
        free((void *)exts_i);
        exts_i = NULL;
    }
}
static int glad_gles30_gl_has_extension(int version, const char *exts, unsigned int num_exts_i, char **exts_i, const char *ext) {
    if(GLAD_VERSION_MAJOR(version) < 3 || !GLAD_GL_IS_SOME_NEW_VERSION) {
        const char *extensions;
        const char *loc;
        const char *terminator;
        extensions = exts;
        if(extensions == NULL || ext == NULL) {
            return 0;
        }
        while(1) {
            loc = strstr(extensions, ext);
            if(loc == NULL) {
                return 0;
            }
            terminator = loc + strlen(ext);
            if((loc == extensions || *(loc - 1) == ' ') &&
                (*terminator == ' ' || *terminator == '\0')) {
                return 1;
            }
            extensions = terminator;
        }
    } else {
        unsigned int index;
        for(index = 0; index < num_exts_i; index++) {
            const char *e = exts_i[index];
            if(strcmp(e, ext) == 0) {
                return 1;
            }
        }
    }
    return 0;
}

static GLADapiproc glad_gles30_gl_get_proc_from_userptr(void *userptr, const char* name) {
    return (GLAD_GNUC_EXTENSION (GLADapiproc (*)(const char *name)) userptr)(name);
}

static int glad_gles30_gl_find_extensions_gles2( int version) {
    const char *exts = NULL;
    unsigned int num_exts_i = 0;
    char **exts_i = NULL;
    if (!glad_gles30_gl_get_extensions(version, &exts, &num_exts_i, &exts_i)) return 0;

    GLAD_UNUSED(glad_gles30_gl_has_extension);

    glad_gles30_gl_free_extensions(exts_i, num_exts_i);

    return 1;
}

static int glad_gles30_gl_find_core_gles2(void) {
    int i;
    const char* version;
    const char* prefixes[] = {
        "OpenGL ES-CM ",
        "OpenGL ES-CL ",
        "OpenGL ES ",
        "OpenGL SC ",
        NULL
    };
    int major = 0;
    int minor = 0;
    version = (const char*) glad_gles30_glGetString(GL_VERSION);
    if (!version) return 0;
    for (i = 0;  prefixes[i];  i++) {
        const size_t length = strlen(prefixes[i]);
        if (strncmp(version, prefixes[i], length) == 0) {
            version += length;
            break;
        }
    }

    GLAD_IMPL_UTIL_SSCANF(version, "%d.%d", &major, &minor);

    GLAD_GL_ES_VERSION_2_0 = (major == 2 && minor >= 0) || major > 2;
    GLAD_GL_ES_VERSION_3_0 = (major == 3 && minor >= 0) || major > 3;

    return GLAD_MAKE_VERSION(major, minor);
}

int gladLoadGLES2UserPtr( GLADuserptrloadfunc load, void *userptr) {
    int version;

    glad_gles30_glGetString = (PFNGLGETSTRINGPROC) load(userptr, "glGetString");
    if(glad_gles30_glGetString == NULL) return 0;
    if(glad_gles30_glGetString(GL_VERSION) == NULL) return 0;
    version = glad_gles30_gl_find_core_gles2();

    glad_gles30_gl_load_GL_ES_VERSION_2_0(load, userptr);
    glad_gles30_gl_load_GL_ES_VERSION_3_0(load, userptr);

    if (!glad_gles30_gl_find_extensions_gles2(version)) return 0;



    return version;
}


int gladLoadGLES2( GLADloadfunc load) {
    return gladLoadGLES2UserPtr( glad_gles30_gl_get_proc_from_userptr, GLAD_GNUC_EXTENSION (void*) load);
}



 


#ifdef __cplusplus
}
#endif

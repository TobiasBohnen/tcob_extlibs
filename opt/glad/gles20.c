/**
 * SPDX-License-Identifier: (WTFPL OR CC0-1.0) AND Apache-2.0
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "gles20.h"

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



static int GLAD_GL_ES_VERSION_2_0 = 0;



PFNGLACTIVETEXTUREPROC glad_gles20_glActiveTexture = NULL;
PFNGLATTACHSHADERPROC glad_gles20_glAttachShader = NULL;
PFNGLBINDATTRIBLOCATIONPROC glad_gles20_glBindAttribLocation = NULL;
PFNGLBINDBUFFERPROC glad_gles20_glBindBuffer = NULL;
PFNGLBINDFRAMEBUFFERPROC glad_gles20_glBindFramebuffer = NULL;
PFNGLBINDRENDERBUFFERPROC glad_gles20_glBindRenderbuffer = NULL;
PFNGLBINDTEXTUREPROC glad_gles20_glBindTexture = NULL;
PFNGLBLENDCOLORPROC glad_gles20_glBlendColor = NULL;
PFNGLBLENDEQUATIONPROC glad_gles20_glBlendEquation = NULL;
PFNGLBLENDEQUATIONSEPARATEPROC glad_gles20_glBlendEquationSeparate = NULL;
PFNGLBLENDFUNCPROC glad_gles20_glBlendFunc = NULL;
PFNGLBLENDFUNCSEPARATEPROC glad_gles20_glBlendFuncSeparate = NULL;
PFNGLBUFFERDATAPROC glad_gles20_glBufferData = NULL;
PFNGLBUFFERSUBDATAPROC glad_gles20_glBufferSubData = NULL;
PFNGLCHECKFRAMEBUFFERSTATUSPROC glad_gles20_glCheckFramebufferStatus = NULL;
PFNGLCLEARPROC glad_gles20_glClear = NULL;
PFNGLCLEARCOLORPROC glad_gles20_glClearColor = NULL;
PFNGLCLEARDEPTHFPROC glad_gles20_glClearDepthf = NULL;
PFNGLCLEARSTENCILPROC glad_gles20_glClearStencil = NULL;
PFNGLCOLORMASKPROC glad_gles20_glColorMask = NULL;
PFNGLCOMPILESHADERPROC glad_gles20_glCompileShader = NULL;
PFNGLCOMPRESSEDTEXIMAGE2DPROC glad_gles20_glCompressedTexImage2D = NULL;
PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC glad_gles20_glCompressedTexSubImage2D = NULL;
PFNGLCOPYTEXIMAGE2DPROC glad_gles20_glCopyTexImage2D = NULL;
PFNGLCOPYTEXSUBIMAGE2DPROC glad_gles20_glCopyTexSubImage2D = NULL;
PFNGLCREATEPROGRAMPROC glad_gles20_glCreateProgram = NULL;
PFNGLCREATESHADERPROC glad_gles20_glCreateShader = NULL;
PFNGLCULLFACEPROC glad_gles20_glCullFace = NULL;
PFNGLDELETEBUFFERSPROC glad_gles20_glDeleteBuffers = NULL;
PFNGLDELETEFRAMEBUFFERSPROC glad_gles20_glDeleteFramebuffers = NULL;
PFNGLDELETEPROGRAMPROC glad_gles20_glDeleteProgram = NULL;
PFNGLDELETERENDERBUFFERSPROC glad_gles20_glDeleteRenderbuffers = NULL;
PFNGLDELETESHADERPROC glad_gles20_glDeleteShader = NULL;
PFNGLDELETETEXTURESPROC glad_gles20_glDeleteTextures = NULL;
PFNGLDEPTHFUNCPROC glad_gles20_glDepthFunc = NULL;
PFNGLDEPTHMASKPROC glad_gles20_glDepthMask = NULL;
PFNGLDEPTHRANGEFPROC glad_gles20_glDepthRangef = NULL;
PFNGLDETACHSHADERPROC glad_gles20_glDetachShader = NULL;
PFNGLDISABLEPROC glad_gles20_glDisable = NULL;
PFNGLDISABLEVERTEXATTRIBARRAYPROC glad_gles20_glDisableVertexAttribArray = NULL;
PFNGLDRAWARRAYSPROC glad_gles20_glDrawArrays = NULL;
PFNGLDRAWELEMENTSPROC glad_gles20_glDrawElements = NULL;
PFNGLENABLEPROC glad_gles20_glEnable = NULL;
PFNGLENABLEVERTEXATTRIBARRAYPROC glad_gles20_glEnableVertexAttribArray = NULL;
PFNGLFINISHPROC glad_gles20_glFinish = NULL;
PFNGLFLUSHPROC glad_gles20_glFlush = NULL;
PFNGLFRAMEBUFFERRENDERBUFFERPROC glad_gles20_glFramebufferRenderbuffer = NULL;
PFNGLFRAMEBUFFERTEXTURE2DPROC glad_gles20_glFramebufferTexture2D = NULL;
PFNGLFRONTFACEPROC glad_gles20_glFrontFace = NULL;
PFNGLGENBUFFERSPROC glad_gles20_glGenBuffers = NULL;
PFNGLGENFRAMEBUFFERSPROC glad_gles20_glGenFramebuffers = NULL;
PFNGLGENRENDERBUFFERSPROC glad_gles20_glGenRenderbuffers = NULL;
PFNGLGENTEXTURESPROC glad_gles20_glGenTextures = NULL;
PFNGLGENERATEMIPMAPPROC glad_gles20_glGenerateMipmap = NULL;
PFNGLGETACTIVEATTRIBPROC glad_gles20_glGetActiveAttrib = NULL;
PFNGLGETACTIVEUNIFORMPROC glad_gles20_glGetActiveUniform = NULL;
PFNGLGETATTACHEDSHADERSPROC glad_gles20_glGetAttachedShaders = NULL;
PFNGLGETATTRIBLOCATIONPROC glad_gles20_glGetAttribLocation = NULL;
PFNGLGETBOOLEANVPROC glad_gles20_glGetBooleanv = NULL;
PFNGLGETBUFFERPARAMETERIVPROC glad_gles20_glGetBufferParameteriv = NULL;
PFNGLGETERRORPROC glad_gles20_glGetError = NULL;
PFNGLGETFLOATVPROC glad_gles20_glGetFloatv = NULL;
PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC glad_gles20_glGetFramebufferAttachmentParameteriv = NULL;
PFNGLGETINTEGERVPROC glad_gles20_glGetIntegerv = NULL;
PFNGLGETPROGRAMINFOLOGPROC glad_gles20_glGetProgramInfoLog = NULL;
PFNGLGETPROGRAMIVPROC glad_gles20_glGetProgramiv = NULL;
PFNGLGETRENDERBUFFERPARAMETERIVPROC glad_gles20_glGetRenderbufferParameteriv = NULL;
PFNGLGETSHADERINFOLOGPROC glad_gles20_glGetShaderInfoLog = NULL;
PFNGLGETSHADERPRECISIONFORMATPROC glad_gles20_glGetShaderPrecisionFormat = NULL;
PFNGLGETSHADERSOURCEPROC glad_gles20_glGetShaderSource = NULL;
PFNGLGETSHADERIVPROC glad_gles20_glGetShaderiv = NULL;
PFNGLGETSTRINGPROC glad_gles20_glGetString = NULL;
PFNGLGETTEXPARAMETERFVPROC glad_gles20_glGetTexParameterfv = NULL;
PFNGLGETTEXPARAMETERIVPROC glad_gles20_glGetTexParameteriv = NULL;
PFNGLGETUNIFORMLOCATIONPROC glad_gles20_glGetUniformLocation = NULL;
PFNGLGETUNIFORMFVPROC glad_gles20_glGetUniformfv = NULL;
PFNGLGETUNIFORMIVPROC glad_gles20_glGetUniformiv = NULL;
PFNGLGETVERTEXATTRIBPOINTERVPROC glad_gles20_glGetVertexAttribPointerv = NULL;
PFNGLGETVERTEXATTRIBFVPROC glad_gles20_glGetVertexAttribfv = NULL;
PFNGLGETVERTEXATTRIBIVPROC glad_gles20_glGetVertexAttribiv = NULL;
PFNGLHINTPROC glad_gles20_glHint = NULL;
PFNGLISBUFFERPROC glad_gles20_glIsBuffer = NULL;
PFNGLISENABLEDPROC glad_gles20_glIsEnabled = NULL;
PFNGLISFRAMEBUFFERPROC glad_gles20_glIsFramebuffer = NULL;
PFNGLISPROGRAMPROC glad_gles20_glIsProgram = NULL;
PFNGLISRENDERBUFFERPROC glad_gles20_glIsRenderbuffer = NULL;
PFNGLISSHADERPROC glad_gles20_glIsShader = NULL;
PFNGLISTEXTUREPROC glad_gles20_glIsTexture = NULL;
PFNGLLINEWIDTHPROC glad_gles20_glLineWidth = NULL;
PFNGLLINKPROGRAMPROC glad_gles20_glLinkProgram = NULL;
PFNGLPIXELSTOREIPROC glad_gles20_glPixelStorei = NULL;
PFNGLPOLYGONOFFSETPROC glad_gles20_glPolygonOffset = NULL;
PFNGLREADPIXELSPROC glad_gles20_glReadPixels = NULL;
PFNGLRELEASESHADERCOMPILERPROC glad_gles20_glReleaseShaderCompiler = NULL;
PFNGLRENDERBUFFERSTORAGEPROC glad_gles20_glRenderbufferStorage = NULL;
PFNGLSAMPLECOVERAGEPROC glad_gles20_glSampleCoverage = NULL;
PFNGLSCISSORPROC glad_gles20_glScissor = NULL;
PFNGLSHADERBINARYPROC glad_gles20_glShaderBinary = NULL;
PFNGLSHADERSOURCEPROC glad_gles20_glShaderSource = NULL;
PFNGLSTENCILFUNCPROC glad_gles20_glStencilFunc = NULL;
PFNGLSTENCILFUNCSEPARATEPROC glad_gles20_glStencilFuncSeparate = NULL;
PFNGLSTENCILMASKPROC glad_gles20_glStencilMask = NULL;
PFNGLSTENCILMASKSEPARATEPROC glad_gles20_glStencilMaskSeparate = NULL;
PFNGLSTENCILOPPROC glad_gles20_glStencilOp = NULL;
PFNGLSTENCILOPSEPARATEPROC glad_gles20_glStencilOpSeparate = NULL;
PFNGLTEXIMAGE2DPROC glad_gles20_glTexImage2D = NULL;
PFNGLTEXPARAMETERFPROC glad_gles20_glTexParameterf = NULL;
PFNGLTEXPARAMETERFVPROC glad_gles20_glTexParameterfv = NULL;
PFNGLTEXPARAMETERIPROC glad_gles20_glTexParameteri = NULL;
PFNGLTEXPARAMETERIVPROC glad_gles20_glTexParameteriv = NULL;
PFNGLTEXSUBIMAGE2DPROC glad_gles20_glTexSubImage2D = NULL;
PFNGLUNIFORM1FPROC glad_gles20_glUniform1f = NULL;
PFNGLUNIFORM1FVPROC glad_gles20_glUniform1fv = NULL;
PFNGLUNIFORM1IPROC glad_gles20_glUniform1i = NULL;
PFNGLUNIFORM1IVPROC glad_gles20_glUniform1iv = NULL;
PFNGLUNIFORM2FPROC glad_gles20_glUniform2f = NULL;
PFNGLUNIFORM2FVPROC glad_gles20_glUniform2fv = NULL;
PFNGLUNIFORM2IPROC glad_gles20_glUniform2i = NULL;
PFNGLUNIFORM2IVPROC glad_gles20_glUniform2iv = NULL;
PFNGLUNIFORM3FPROC glad_gles20_glUniform3f = NULL;
PFNGLUNIFORM3FVPROC glad_gles20_glUniform3fv = NULL;
PFNGLUNIFORM3IPROC glad_gles20_glUniform3i = NULL;
PFNGLUNIFORM3IVPROC glad_gles20_glUniform3iv = NULL;
PFNGLUNIFORM4FPROC glad_gles20_glUniform4f = NULL;
PFNGLUNIFORM4FVPROC glad_gles20_glUniform4fv = NULL;
PFNGLUNIFORM4IPROC glad_gles20_glUniform4i = NULL;
PFNGLUNIFORM4IVPROC glad_gles20_glUniform4iv = NULL;
PFNGLUNIFORMMATRIX2FVPROC glad_gles20_glUniformMatrix2fv = NULL;
PFNGLUNIFORMMATRIX3FVPROC glad_gles20_glUniformMatrix3fv = NULL;
PFNGLUNIFORMMATRIX4FVPROC glad_gles20_glUniformMatrix4fv = NULL;
PFNGLUSEPROGRAMPROC glad_gles20_glUseProgram = NULL;
PFNGLVALIDATEPROGRAMPROC glad_gles20_glValidateProgram = NULL;
PFNGLVERTEXATTRIB1FPROC glad_gles20_glVertexAttrib1f = NULL;
PFNGLVERTEXATTRIB1FVPROC glad_gles20_glVertexAttrib1fv = NULL;
PFNGLVERTEXATTRIB2FPROC glad_gles20_glVertexAttrib2f = NULL;
PFNGLVERTEXATTRIB2FVPROC glad_gles20_glVertexAttrib2fv = NULL;
PFNGLVERTEXATTRIB3FPROC glad_gles20_glVertexAttrib3f = NULL;
PFNGLVERTEXATTRIB3FVPROC glad_gles20_glVertexAttrib3fv = NULL;
PFNGLVERTEXATTRIB4FPROC glad_gles20_glVertexAttrib4f = NULL;
PFNGLVERTEXATTRIB4FVPROC glad_gles20_glVertexAttrib4fv = NULL;
PFNGLVERTEXATTRIBPOINTERPROC glad_gles20_glVertexAttribPointer = NULL;
PFNGLVIEWPORTPROC glad_gles20_glViewport = NULL;


static void glad_gles20_gl_load_GL_ES_VERSION_2_0( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_GL_ES_VERSION_2_0) return;
    glad_gles20_glActiveTexture = (PFNGLACTIVETEXTUREPROC) load(userptr, "glActiveTexture");
    glad_gles20_glAttachShader = (PFNGLATTACHSHADERPROC) load(userptr, "glAttachShader");
    glad_gles20_glBindAttribLocation = (PFNGLBINDATTRIBLOCATIONPROC) load(userptr, "glBindAttribLocation");
    glad_gles20_glBindBuffer = (PFNGLBINDBUFFERPROC) load(userptr, "glBindBuffer");
    glad_gles20_glBindFramebuffer = (PFNGLBINDFRAMEBUFFERPROC) load(userptr, "glBindFramebuffer");
    glad_gles20_glBindRenderbuffer = (PFNGLBINDRENDERBUFFERPROC) load(userptr, "glBindRenderbuffer");
    glad_gles20_glBindTexture = (PFNGLBINDTEXTUREPROC) load(userptr, "glBindTexture");
    glad_gles20_glBlendColor = (PFNGLBLENDCOLORPROC) load(userptr, "glBlendColor");
    glad_gles20_glBlendEquation = (PFNGLBLENDEQUATIONPROC) load(userptr, "glBlendEquation");
    glad_gles20_glBlendEquationSeparate = (PFNGLBLENDEQUATIONSEPARATEPROC) load(userptr, "glBlendEquationSeparate");
    glad_gles20_glBlendFunc = (PFNGLBLENDFUNCPROC) load(userptr, "glBlendFunc");
    glad_gles20_glBlendFuncSeparate = (PFNGLBLENDFUNCSEPARATEPROC) load(userptr, "glBlendFuncSeparate");
    glad_gles20_glBufferData = (PFNGLBUFFERDATAPROC) load(userptr, "glBufferData");
    glad_gles20_glBufferSubData = (PFNGLBUFFERSUBDATAPROC) load(userptr, "glBufferSubData");
    glad_gles20_glCheckFramebufferStatus = (PFNGLCHECKFRAMEBUFFERSTATUSPROC) load(userptr, "glCheckFramebufferStatus");
    glad_gles20_glClear = (PFNGLCLEARPROC) load(userptr, "glClear");
    glad_gles20_glClearColor = (PFNGLCLEARCOLORPROC) load(userptr, "glClearColor");
    glad_gles20_glClearDepthf = (PFNGLCLEARDEPTHFPROC) load(userptr, "glClearDepthf");
    glad_gles20_glClearStencil = (PFNGLCLEARSTENCILPROC) load(userptr, "glClearStencil");
    glad_gles20_glColorMask = (PFNGLCOLORMASKPROC) load(userptr, "glColorMask");
    glad_gles20_glCompileShader = (PFNGLCOMPILESHADERPROC) load(userptr, "glCompileShader");
    glad_gles20_glCompressedTexImage2D = (PFNGLCOMPRESSEDTEXIMAGE2DPROC) load(userptr, "glCompressedTexImage2D");
    glad_gles20_glCompressedTexSubImage2D = (PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC) load(userptr, "glCompressedTexSubImage2D");
    glad_gles20_glCopyTexImage2D = (PFNGLCOPYTEXIMAGE2DPROC) load(userptr, "glCopyTexImage2D");
    glad_gles20_glCopyTexSubImage2D = (PFNGLCOPYTEXSUBIMAGE2DPROC) load(userptr, "glCopyTexSubImage2D");
    glad_gles20_glCreateProgram = (PFNGLCREATEPROGRAMPROC) load(userptr, "glCreateProgram");
    glad_gles20_glCreateShader = (PFNGLCREATESHADERPROC) load(userptr, "glCreateShader");
    glad_gles20_glCullFace = (PFNGLCULLFACEPROC) load(userptr, "glCullFace");
    glad_gles20_glDeleteBuffers = (PFNGLDELETEBUFFERSPROC) load(userptr, "glDeleteBuffers");
    glad_gles20_glDeleteFramebuffers = (PFNGLDELETEFRAMEBUFFERSPROC) load(userptr, "glDeleteFramebuffers");
    glad_gles20_glDeleteProgram = (PFNGLDELETEPROGRAMPROC) load(userptr, "glDeleteProgram");
    glad_gles20_glDeleteRenderbuffers = (PFNGLDELETERENDERBUFFERSPROC) load(userptr, "glDeleteRenderbuffers");
    glad_gles20_glDeleteShader = (PFNGLDELETESHADERPROC) load(userptr, "glDeleteShader");
    glad_gles20_glDeleteTextures = (PFNGLDELETETEXTURESPROC) load(userptr, "glDeleteTextures");
    glad_gles20_glDepthFunc = (PFNGLDEPTHFUNCPROC) load(userptr, "glDepthFunc");
    glad_gles20_glDepthMask = (PFNGLDEPTHMASKPROC) load(userptr, "glDepthMask");
    glad_gles20_glDepthRangef = (PFNGLDEPTHRANGEFPROC) load(userptr, "glDepthRangef");
    glad_gles20_glDetachShader = (PFNGLDETACHSHADERPROC) load(userptr, "glDetachShader");
    glad_gles20_glDisable = (PFNGLDISABLEPROC) load(userptr, "glDisable");
    glad_gles20_glDisableVertexAttribArray = (PFNGLDISABLEVERTEXATTRIBARRAYPROC) load(userptr, "glDisableVertexAttribArray");
    glad_gles20_glDrawArrays = (PFNGLDRAWARRAYSPROC) load(userptr, "glDrawArrays");
    glad_gles20_glDrawElements = (PFNGLDRAWELEMENTSPROC) load(userptr, "glDrawElements");
    glad_gles20_glEnable = (PFNGLENABLEPROC) load(userptr, "glEnable");
    glad_gles20_glEnableVertexAttribArray = (PFNGLENABLEVERTEXATTRIBARRAYPROC) load(userptr, "glEnableVertexAttribArray");
    glad_gles20_glFinish = (PFNGLFINISHPROC) load(userptr, "glFinish");
    glad_gles20_glFlush = (PFNGLFLUSHPROC) load(userptr, "glFlush");
    glad_gles20_glFramebufferRenderbuffer = (PFNGLFRAMEBUFFERRENDERBUFFERPROC) load(userptr, "glFramebufferRenderbuffer");
    glad_gles20_glFramebufferTexture2D = (PFNGLFRAMEBUFFERTEXTURE2DPROC) load(userptr, "glFramebufferTexture2D");
    glad_gles20_glFrontFace = (PFNGLFRONTFACEPROC) load(userptr, "glFrontFace");
    glad_gles20_glGenBuffers = (PFNGLGENBUFFERSPROC) load(userptr, "glGenBuffers");
    glad_gles20_glGenFramebuffers = (PFNGLGENFRAMEBUFFERSPROC) load(userptr, "glGenFramebuffers");
    glad_gles20_glGenRenderbuffers = (PFNGLGENRENDERBUFFERSPROC) load(userptr, "glGenRenderbuffers");
    glad_gles20_glGenTextures = (PFNGLGENTEXTURESPROC) load(userptr, "glGenTextures");
    glad_gles20_glGenerateMipmap = (PFNGLGENERATEMIPMAPPROC) load(userptr, "glGenerateMipmap");
    glad_gles20_glGetActiveAttrib = (PFNGLGETACTIVEATTRIBPROC) load(userptr, "glGetActiveAttrib");
    glad_gles20_glGetActiveUniform = (PFNGLGETACTIVEUNIFORMPROC) load(userptr, "glGetActiveUniform");
    glad_gles20_glGetAttachedShaders = (PFNGLGETATTACHEDSHADERSPROC) load(userptr, "glGetAttachedShaders");
    glad_gles20_glGetAttribLocation = (PFNGLGETATTRIBLOCATIONPROC) load(userptr, "glGetAttribLocation");
    glad_gles20_glGetBooleanv = (PFNGLGETBOOLEANVPROC) load(userptr, "glGetBooleanv");
    glad_gles20_glGetBufferParameteriv = (PFNGLGETBUFFERPARAMETERIVPROC) load(userptr, "glGetBufferParameteriv");
    glad_gles20_glGetError = (PFNGLGETERRORPROC) load(userptr, "glGetError");
    glad_gles20_glGetFloatv = (PFNGLGETFLOATVPROC) load(userptr, "glGetFloatv");
    glad_gles20_glGetFramebufferAttachmentParameteriv = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC) load(userptr, "glGetFramebufferAttachmentParameteriv");
    glad_gles20_glGetIntegerv = (PFNGLGETINTEGERVPROC) load(userptr, "glGetIntegerv");
    glad_gles20_glGetProgramInfoLog = (PFNGLGETPROGRAMINFOLOGPROC) load(userptr, "glGetProgramInfoLog");
    glad_gles20_glGetProgramiv = (PFNGLGETPROGRAMIVPROC) load(userptr, "glGetProgramiv");
    glad_gles20_glGetRenderbufferParameteriv = (PFNGLGETRENDERBUFFERPARAMETERIVPROC) load(userptr, "glGetRenderbufferParameteriv");
    glad_gles20_glGetShaderInfoLog = (PFNGLGETSHADERINFOLOGPROC) load(userptr, "glGetShaderInfoLog");
    glad_gles20_glGetShaderPrecisionFormat = (PFNGLGETSHADERPRECISIONFORMATPROC) load(userptr, "glGetShaderPrecisionFormat");
    glad_gles20_glGetShaderSource = (PFNGLGETSHADERSOURCEPROC) load(userptr, "glGetShaderSource");
    glad_gles20_glGetShaderiv = (PFNGLGETSHADERIVPROC) load(userptr, "glGetShaderiv");
    glad_gles20_glGetString = (PFNGLGETSTRINGPROC) load(userptr, "glGetString");
    glad_gles20_glGetTexParameterfv = (PFNGLGETTEXPARAMETERFVPROC) load(userptr, "glGetTexParameterfv");
    glad_gles20_glGetTexParameteriv = (PFNGLGETTEXPARAMETERIVPROC) load(userptr, "glGetTexParameteriv");
    glad_gles20_glGetUniformLocation = (PFNGLGETUNIFORMLOCATIONPROC) load(userptr, "glGetUniformLocation");
    glad_gles20_glGetUniformfv = (PFNGLGETUNIFORMFVPROC) load(userptr, "glGetUniformfv");
    glad_gles20_glGetUniformiv = (PFNGLGETUNIFORMIVPROC) load(userptr, "glGetUniformiv");
    glad_gles20_glGetVertexAttribPointerv = (PFNGLGETVERTEXATTRIBPOINTERVPROC) load(userptr, "glGetVertexAttribPointerv");
    glad_gles20_glGetVertexAttribfv = (PFNGLGETVERTEXATTRIBFVPROC) load(userptr, "glGetVertexAttribfv");
    glad_gles20_glGetVertexAttribiv = (PFNGLGETVERTEXATTRIBIVPROC) load(userptr, "glGetVertexAttribiv");
    glad_gles20_glHint = (PFNGLHINTPROC) load(userptr, "glHint");
    glad_gles20_glIsBuffer = (PFNGLISBUFFERPROC) load(userptr, "glIsBuffer");
    glad_gles20_glIsEnabled = (PFNGLISENABLEDPROC) load(userptr, "glIsEnabled");
    glad_gles20_glIsFramebuffer = (PFNGLISFRAMEBUFFERPROC) load(userptr, "glIsFramebuffer");
    glad_gles20_glIsProgram = (PFNGLISPROGRAMPROC) load(userptr, "glIsProgram");
    glad_gles20_glIsRenderbuffer = (PFNGLISRENDERBUFFERPROC) load(userptr, "glIsRenderbuffer");
    glad_gles20_glIsShader = (PFNGLISSHADERPROC) load(userptr, "glIsShader");
    glad_gles20_glIsTexture = (PFNGLISTEXTUREPROC) load(userptr, "glIsTexture");
    glad_gles20_glLineWidth = (PFNGLLINEWIDTHPROC) load(userptr, "glLineWidth");
    glad_gles20_glLinkProgram = (PFNGLLINKPROGRAMPROC) load(userptr, "glLinkProgram");
    glad_gles20_glPixelStorei = (PFNGLPIXELSTOREIPROC) load(userptr, "glPixelStorei");
    glad_gles20_glPolygonOffset = (PFNGLPOLYGONOFFSETPROC) load(userptr, "glPolygonOffset");
    glad_gles20_glReadPixels = (PFNGLREADPIXELSPROC) load(userptr, "glReadPixels");
    glad_gles20_glReleaseShaderCompiler = (PFNGLRELEASESHADERCOMPILERPROC) load(userptr, "glReleaseShaderCompiler");
    glad_gles20_glRenderbufferStorage = (PFNGLRENDERBUFFERSTORAGEPROC) load(userptr, "glRenderbufferStorage");
    glad_gles20_glSampleCoverage = (PFNGLSAMPLECOVERAGEPROC) load(userptr, "glSampleCoverage");
    glad_gles20_glScissor = (PFNGLSCISSORPROC) load(userptr, "glScissor");
    glad_gles20_glShaderBinary = (PFNGLSHADERBINARYPROC) load(userptr, "glShaderBinary");
    glad_gles20_glShaderSource = (PFNGLSHADERSOURCEPROC) load(userptr, "glShaderSource");
    glad_gles20_glStencilFunc = (PFNGLSTENCILFUNCPROC) load(userptr, "glStencilFunc");
    glad_gles20_glStencilFuncSeparate = (PFNGLSTENCILFUNCSEPARATEPROC) load(userptr, "glStencilFuncSeparate");
    glad_gles20_glStencilMask = (PFNGLSTENCILMASKPROC) load(userptr, "glStencilMask");
    glad_gles20_glStencilMaskSeparate = (PFNGLSTENCILMASKSEPARATEPROC) load(userptr, "glStencilMaskSeparate");
    glad_gles20_glStencilOp = (PFNGLSTENCILOPPROC) load(userptr, "glStencilOp");
    glad_gles20_glStencilOpSeparate = (PFNGLSTENCILOPSEPARATEPROC) load(userptr, "glStencilOpSeparate");
    glad_gles20_glTexImage2D = (PFNGLTEXIMAGE2DPROC) load(userptr, "glTexImage2D");
    glad_gles20_glTexParameterf = (PFNGLTEXPARAMETERFPROC) load(userptr, "glTexParameterf");
    glad_gles20_glTexParameterfv = (PFNGLTEXPARAMETERFVPROC) load(userptr, "glTexParameterfv");
    glad_gles20_glTexParameteri = (PFNGLTEXPARAMETERIPROC) load(userptr, "glTexParameteri");
    glad_gles20_glTexParameteriv = (PFNGLTEXPARAMETERIVPROC) load(userptr, "glTexParameteriv");
    glad_gles20_glTexSubImage2D = (PFNGLTEXSUBIMAGE2DPROC) load(userptr, "glTexSubImage2D");
    glad_gles20_glUniform1f = (PFNGLUNIFORM1FPROC) load(userptr, "glUniform1f");
    glad_gles20_glUniform1fv = (PFNGLUNIFORM1FVPROC) load(userptr, "glUniform1fv");
    glad_gles20_glUniform1i = (PFNGLUNIFORM1IPROC) load(userptr, "glUniform1i");
    glad_gles20_glUniform1iv = (PFNGLUNIFORM1IVPROC) load(userptr, "glUniform1iv");
    glad_gles20_glUniform2f = (PFNGLUNIFORM2FPROC) load(userptr, "glUniform2f");
    glad_gles20_glUniform2fv = (PFNGLUNIFORM2FVPROC) load(userptr, "glUniform2fv");
    glad_gles20_glUniform2i = (PFNGLUNIFORM2IPROC) load(userptr, "glUniform2i");
    glad_gles20_glUniform2iv = (PFNGLUNIFORM2IVPROC) load(userptr, "glUniform2iv");
    glad_gles20_glUniform3f = (PFNGLUNIFORM3FPROC) load(userptr, "glUniform3f");
    glad_gles20_glUniform3fv = (PFNGLUNIFORM3FVPROC) load(userptr, "glUniform3fv");
    glad_gles20_glUniform3i = (PFNGLUNIFORM3IPROC) load(userptr, "glUniform3i");
    glad_gles20_glUniform3iv = (PFNGLUNIFORM3IVPROC) load(userptr, "glUniform3iv");
    glad_gles20_glUniform4f = (PFNGLUNIFORM4FPROC) load(userptr, "glUniform4f");
    glad_gles20_glUniform4fv = (PFNGLUNIFORM4FVPROC) load(userptr, "glUniform4fv");
    glad_gles20_glUniform4i = (PFNGLUNIFORM4IPROC) load(userptr, "glUniform4i");
    glad_gles20_glUniform4iv = (PFNGLUNIFORM4IVPROC) load(userptr, "glUniform4iv");
    glad_gles20_glUniformMatrix2fv = (PFNGLUNIFORMMATRIX2FVPROC) load(userptr, "glUniformMatrix2fv");
    glad_gles20_glUniformMatrix3fv = (PFNGLUNIFORMMATRIX3FVPROC) load(userptr, "glUniformMatrix3fv");
    glad_gles20_glUniformMatrix4fv = (PFNGLUNIFORMMATRIX4FVPROC) load(userptr, "glUniformMatrix4fv");
    glad_gles20_glUseProgram = (PFNGLUSEPROGRAMPROC) load(userptr, "glUseProgram");
    glad_gles20_glValidateProgram = (PFNGLVALIDATEPROGRAMPROC) load(userptr, "glValidateProgram");
    glad_gles20_glVertexAttrib1f = (PFNGLVERTEXATTRIB1FPROC) load(userptr, "glVertexAttrib1f");
    glad_gles20_glVertexAttrib1fv = (PFNGLVERTEXATTRIB1FVPROC) load(userptr, "glVertexAttrib1fv");
    glad_gles20_glVertexAttrib2f = (PFNGLVERTEXATTRIB2FPROC) load(userptr, "glVertexAttrib2f");
    glad_gles20_glVertexAttrib2fv = (PFNGLVERTEXATTRIB2FVPROC) load(userptr, "glVertexAttrib2fv");
    glad_gles20_glVertexAttrib3f = (PFNGLVERTEXATTRIB3FPROC) load(userptr, "glVertexAttrib3f");
    glad_gles20_glVertexAttrib3fv = (PFNGLVERTEXATTRIB3FVPROC) load(userptr, "glVertexAttrib3fv");
    glad_gles20_glVertexAttrib4f = (PFNGLVERTEXATTRIB4FPROC) load(userptr, "glVertexAttrib4f");
    glad_gles20_glVertexAttrib4fv = (PFNGLVERTEXATTRIB4FVPROC) load(userptr, "glVertexAttrib4fv");
    glad_gles20_glVertexAttribPointer = (PFNGLVERTEXATTRIBPOINTERPROC) load(userptr, "glVertexAttribPointer");
    glad_gles20_glViewport = (PFNGLVIEWPORTPROC) load(userptr, "glViewport");
}



static void glad_gles20_gl_free_extensions(char **exts_i) {
    if (exts_i != NULL) {
        unsigned int index;
        for(index = 0; exts_i[index]; index++) {
            free((void *) (exts_i[index]));
        }
        free((void *)exts_i);
        exts_i = NULL;
    }
}
static int glad_gles20_gl_get_extensions( const char **out_exts, char ***out_exts_i) {
#if defined(GL_ES_VERSION_3_0) || defined(GL_VERSION_3_0)
    if (glad_gles20_glGetStringi != NULL && glad_gles20_glGetIntegerv != NULL) {
        unsigned int index = 0;
        unsigned int num_exts_i = 0;
        char **exts_i = NULL;
        glad_gles20_glGetIntegerv(GL_NUM_EXTENSIONS, (int*) &num_exts_i);
        exts_i = (char **) malloc((num_exts_i + 1) * (sizeof *exts_i));
        if (exts_i == NULL) {
            return 0;
        }
        for(index = 0; index < num_exts_i; index++) {
            const char *gl_str_tmp = (const char*) glad_gles20_glGetStringi(GL_EXTENSIONS, index);
            size_t len = strlen(gl_str_tmp) + 1;

            char *local_str = (char*) malloc(len * sizeof(char));
            if(local_str == NULL) {
                exts_i[index] = NULL;
                glad_gles20_gl_free_extensions(exts_i);
                return 0;
            }

            memcpy(local_str, gl_str_tmp, len * sizeof(char));
            exts_i[index] = local_str;
        }
        exts_i[index] = NULL;

        *out_exts_i = exts_i;

        return 1;
    }
#else
    GLAD_UNUSED(out_exts_i);
#endif
    if (glad_gles20_glGetString == NULL) {
        return 0;
    }
    *out_exts = (const char *)glad_gles20_glGetString(GL_EXTENSIONS);
    return 1;
}
static int glad_gles20_gl_has_extension(const char *exts, char **exts_i, const char *ext) {
    if(exts_i) {
        unsigned int index;
        for(index = 0; exts_i[index]; index++) {
            const char *e = exts_i[index];
            if(strcmp(e, ext) == 0) {
                return 1;
            }
        }
    } else {
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
    }
    return 0;
}

static GLADapiproc glad_gles20_gl_get_proc_from_userptr(void *userptr, const char* name) {
    return (GLAD_GNUC_EXTENSION (GLADapiproc (*)(const char *name)) userptr)(name);
}

static int glad_gles20_gl_find_extensions_gles2(void) {
    const char *exts = NULL;
    char **exts_i = NULL;
    if (!glad_gles20_gl_get_extensions(&exts, &exts_i)) return 0;

    GLAD_UNUSED(glad_gles20_gl_has_extension);

    glad_gles20_gl_free_extensions(exts_i);

    return 1;
}

static int glad_gles20_gl_find_core_gles2(void) {
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
    version = (const char*) glad_gles20_glGetString(GL_VERSION);
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

    return GLAD_MAKE_VERSION(major, minor);
}

int gladLoadGLES20UserPtr( GLADuserptrloadfunc load, void *userptr) {
    int version;

    glad_gles20_glGetString = (PFNGLGETSTRINGPROC) load(userptr, "glGetString");
    if(glad_gles20_glGetString == NULL) return 0;
    version = glad_gles20_gl_find_core_gles2();

    glad_gles20_gl_load_GL_ES_VERSION_2_0(load, userptr);

    if (!glad_gles20_gl_find_extensions_gles2()) return 0;



    return version;
}


int gladLoadGLES20( GLADloadfunc load) {
    return gladLoadGLES20UserPtr( glad_gles20_gl_get_proc_from_userptr, GLAD_GNUC_EXTENSION (void*) load);
}



 


#ifdef __cplusplus
}
#endif

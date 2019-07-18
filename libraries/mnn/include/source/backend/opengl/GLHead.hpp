//
//  GLHead.h
//  MNN
//
//  Created by MNN on 2019/01/31.
//  Copyright © 2018, Alibaba Group Holding Limited
//

#ifndef GLHEAD_H
#define GLHEAD_H

/*This mean the function can just be called in the opengl Context*/
#define CONTEXT_API
/*This mean the class should be used only in opengl context thread*/
#define CONTEXT_CLASS
/*If defined this, means the method of a CONTEXT_CLASS can be called outside context*/
#define CONTEXT_FREE_API
#include <assert.h>
#include <stdlib.h>
#ifdef __ANDROID__
#include <GLES2/gl2.h>
#include <GLES2/gl2ext.h>
#include <GLES3/gl31.h>
#else
#ifdef __APPLE__
#include <OpenGL/gl.h>
#else
#include <GL/glew.h>
#endif
#endif
#include "GLDebug.hpp"
#define OPENGL_ASSERT(x) assert(x)

#ifdef USE_FLOAT32
    #define TEXTURE_FORMAT GL_RGBA32F
    #define IMAGE_FORMAT "rgba32f"
#else
    #define TEXTURE_FORMAT GL_RGBA16F
    #define IMAGE_FORMAT "rgba16f"
#endif

#endif

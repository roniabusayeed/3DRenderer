#pragma once
#include <csignal>

#define ASSERT(x)   if (!(x)) raise(SIGTRAP)
#define GLCall(x)   GLClearError();\
    x;\
    ASSERT(GLLogCall(#x, __FILE__, __LINE__))

void GLClearError();
bool GLLogCall(const char* func, const char* file, int line);

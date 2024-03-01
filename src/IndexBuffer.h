#pragma once
#include <cstdlib>

class IndexBuffer
{
private:
    unsigned int id;
public:
    IndexBuffer(const unsigned int* indices, size_t count);
    ~IndexBuffer();
    void Bind()const;
    void Unbind()const;
};

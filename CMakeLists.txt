cmake_minimum_required(VERSION 3.18)
project(3DRenderer)

set(CMAKE_CXX_STANDARD 17)

# Add additional include directories.
include_directories(Dependencies/glad/include
                    Dependencies/GLFW/include
                    Dependencies/glm/include)

# Add additional library directories.
link_directories(Dependencies/GLFW/lib-arm64)

# Create library out of glad source files.
add_library(glad STATIC Dependencies/glad/src/glad.c)

# Build executable.
add_executable(3DRenderer src/Application.cpp
        src/vendor/stb_image.cpp
        src/Camera.cpp
        src/DebugUtils.cpp
        src/IndexBuffer.cpp
        src/Renderer.cpp
        src/Shader.cpp
        src/Texture.cpp
        src/VertexArray.cpp
        src/VertexBuffer.cpp
        src/VertexBufferLayout.cpp)

# Link libraries with the executable.
target_link_libraries(3DRenderer glad glfw3 pthread  "-framework OpenGL" "-framework IOKit" "-framework Cocoa")

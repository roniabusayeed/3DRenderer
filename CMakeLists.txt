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

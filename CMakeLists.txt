cmake_minimum_required(VERSION 3.15)
project(native_data_types)

set(CMAKE_CXX_STANDARD 14)

# http://www.saoe.net/blog/generating-64-bit-projects-for-visual-studio-with-cmake/


# https://cmake.org/cmake/help/latest/variable/CMAKE_VS_PLATFORM_TOOLSET_HOST_ARCHITECTURE.html
# How to set this ?

# set(host "x64")
# set(CMAKE_VS_PLATFORM_TOOLSET_HOST_ARCHITECTURE "x64")
# set(CMAKE_GENERATOR_TOOLSET "host=x64")
# set(CMAKE_GENERATOR_PLATFORM "x64")
# set(CMAKE_GENERATOR_TOOLSET "Visual Studio")
# set(CMAKE_GENERATOR_TOOLSET "Visual Studio 64")




# set (native_data_types_ARCHITECTURE "x64")
# set(BUILD_ARCH "-m64")
# set(BUILD_ARCH "-m32")

# set(CMAKE_C_FLAGS -m32)
# set(CMAKE_CXX_FLAGS -m32)

# set(CMAKE_C_FLAGS -m64)
# set(CMAKE_CXX_FLAGS -m64)

add_executable(native_data_types main.cpp)

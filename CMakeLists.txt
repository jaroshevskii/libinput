cmake_minimum_required(VERSION 3.0.0)

# Set the project name and version.
project(LibInput VERSION 1.0.0)

# Set specify the C++ standard.
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Configure a header file to pass some of the CMake settings to the source code.
configure_file(Config.h.in Config.h)

# Add the executable
add_executable(LibInput LibInput.cpp)

# Add the binary tree to the search path for include files so that we will find Config.h.
target_include_directories(${PROJECT_NAME} PUBLIC "${PROJECT_BINARY_DIR}")
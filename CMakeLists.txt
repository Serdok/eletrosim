cmake_minimum_required(VERSION 3.24)
project(
        electrosim
        LANGUAGES CXX
        VERSION 0.0.1
)

# Make out-of-source build mandatory
if (CMAKE_SOURCE_DIR STREQUAL CMAKE_BINARY_DIR)
    message(FATAL_ERROR "In-source builds is not allowed. Please make a new directory and run CMake from there.")
endif ()

# Project options
option(ENABLE_TESTING "Configure CMake to add tests" OFF)

# Project globals
list(PREPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)
set(namespace "spp")
set(exe_name "electrosim")

# Include project scripts
add_subdirectory(scripts/)

# Include third-party projects
add_subdirectory(vendor/)

# Add target and sources
add_subdirectory(src/)

# Enable testing if requested or the current project is the top-level one
if (ENABLE_TESTING OR PROJECT_IS_TOP_LEVEL)
    add_subdirectory(tests/)
endif ()


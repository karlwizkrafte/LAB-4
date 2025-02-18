## [ WARNING ] This software is designed for Linux and may not be compatible with Windows NT platforms.

if(UNIX) 
    message(STATUS "Developed by: Karl Vince Reyes (2025 - Educational)\n-- https://github.com/karlwizkrafte\n")

elseif(WIN32)
    message(STATUS "-- DEVELOPED BY: KARL VINCE REYES\n")
    message(FATAL_ERROR "\nWindows NT is not supported.\nUse WSL or Github Codespaces Instead.")
endif()

cmake_minimum_required(VERSION 3.10.0)
project(app VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)

add_executable(app src/main.cpp include/kaviyes/kaviyes.cpp)
target_include_directories(app PRIVATE include)
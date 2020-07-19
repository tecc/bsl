cmake_minimum_required(VERSION 3.16)
set(CMAKE_C_STANDARD 90)

project(bsl VERSION 0.1)

set(BSL_SOURCES)
set(BSL_HEADERS)

add_library(bsl ${BSL_SOURCES} ${BSL_HEADERS})

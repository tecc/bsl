cmake_minimum_required(VERSION 3.16)
set(CMAKE_C_STANDARD 90)

project(bsl VERSION 0.1 LANGUAGES C)
project(bsl++ VERSION 0.1 LANGUAGES C CXX)

set(BSL_SOURCES src/bsl/string.c src/bsl/utility.c include/bsl/io.h src/bsl/io.c)
set(BSL_HEADERS include/bsl/string.h include/bsl/utility.h)
add_library(bsl SHARED ${BSL_SOURCES} ${BSL_HEADERS})

set_target_properties(bsl PROPERTIES LINKER_LANGUAGE C)
set_target_properties(bsl PROPERTIES LINKER_LANGUAGE CXX)

set(BSL++_SOURCES src/bsl++/string.cpp)
set(BSL++_HEADERS include/bsl++/string.h)
add_library(bsl++ SHARED ${BSL++_SOURCES} ${BSL_HEADERS})

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include/)
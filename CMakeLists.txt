cmake_minimum_required(VERSION 3.8)
project(pi)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c list.c list.h number.c number.h pi.c pi.h lib/arr.c lib/arr.h)
add_executable(pi ${SOURCE_FILES})
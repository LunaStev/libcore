cmake_minimum_required(VERSION 3.29)
project(libcore C)

set(CMAKE_C_STANDARD 11)

add_executable(libcore
        header/iosys.h
        test/iosys.c
        header/syntax.h
        test/syntax.c
)

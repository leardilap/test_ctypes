cmake_minimum_required(VERSION 2.8.9)
project(test_ctypes)
 
#Bring the headers into the project
include_directories(include)
 
#Can manually add the sources using the set command as follows:
#set(SOURCES src/test_ctypes.c)
 
#However, the file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "src/*.c")
add_definitions("-std=c99 -Wall")
 
add_library(test_ctypes SHARED ${SOURCES})
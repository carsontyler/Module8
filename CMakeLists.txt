cmake_minimum_required(VERSION 3.8)
project(Module10)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES dynamicMem.cpp)
#set(SOURCE_FILES testStrClass.cpp MyString.cpp MyString.h)
#set(SOURCE_FILES dynamicIntArray.cpp)
#set(SOURCE_FILES exception1.cpp)
set(SOURCE_FILES DistanceException.cpp Distance.cpp Distance.h)
add_executable(Module10 ${SOURCE_FILES})
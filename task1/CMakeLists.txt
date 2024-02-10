# CMakeList.txt: проект CMake для Task1; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

project ("Task1")

option(USE_DOUBLE "Use double array" OFF) 

if(USE_DOUBLE)
    add_compile_definitions(ARRAY_TYPE_DOUBLE) 
endif()
 
add_executable (Task1 "Task1.cpp" "Task1.h") 

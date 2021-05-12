cmake_minimum_required (VERSION 3.8)

project (CMakeProject1)

set(src "./src/main.cpp" "./src/say_hello.cpp") 
set(include "./include/say_hello.h")
add_executable(say_hello ${src} ${include}) 
include_directories("./include")
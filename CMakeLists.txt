cmake_minimum_required(VERSION 3.20)
project(AI_Safety_Runtime LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

include_directories(core/include)

add_subdirectory(core)
add_subdirectory(bindings)
add_subdirectory(streaming)

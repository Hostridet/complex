cmake_minimum_required(VERSION 3.17)
project(complex)

set(CMAKE_CXX_STANDARD 14)
set(SOURCE_FILES complex.cpp)

add_subdirectory(googletest)

include_directories(googletest/googletest/include)

add_executable(complex main.cpp complex.cpp complex.h)
add_executable(tests tests.cpp ${SOURCE_FILES})

target_link_libraries(tests gtest)
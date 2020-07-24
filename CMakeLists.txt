cmake_minimum_required (VERSION 3.12.0)
project(Example)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(${PROJECT_NAME} Example.cpp)

target_link_libraries(${PROJECT_NAME} ${CONAN_LIBS})
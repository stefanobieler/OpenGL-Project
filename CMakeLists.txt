cmake_minimum_required(VERSION 3.19)

project(OpenGLProject VERSION "1.0")


set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(external/glfw)
add_subdirectory(src)

target_include_directories(${PROJECT_NAME} PRIVATE external/glfw/include)
target_link_directories(${PROJECT_NAME} PRIVATE external/glfw/src)
target_link_libraries(${PROJECT_NAME} glfw)

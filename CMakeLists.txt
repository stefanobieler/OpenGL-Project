cmake_minimum_required(VERSION 3.19)

project(OpenGLProject VERSION "1.0")

configure_file(OGPConfig.h.in OGPConfig.h)

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR})
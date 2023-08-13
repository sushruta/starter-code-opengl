cmake_minimum_required(VERSION 3.20...3.27 FATAL_ERROR)

project(04-template VERSION 1.0 LANGUAGES CXX)

if (CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
  set(CMAKE_CXX_STANDARD 20)
  set(CMAKE_CXX_EXTENSIONS OFF)

  set_property(GLOBAL PROPERTY USE_FOLDERS ON)
endif()

set(glfw3_DIR /usr/local/lib/cmake/glfw3)
set(glm_DIR /usr/local/lib/cmake/glm)

find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)
find_package(glm REQUIRED)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

file(COPY resources DESTINATION ${CMAKE_BINARY_DIR})

add_subdirectory(glad)
add_subdirectory(stb)
add_subdirectory(src)

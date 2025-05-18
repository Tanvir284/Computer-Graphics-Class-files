cmake_minimum_required(VERSION 3.10)
project(opengl_game)

set(CMAKE_CXX_STANDARD 17)

# Locate dependencies. These packages should be installed on your system.
find_package(glfw3 REQUIRED)
find_package(glm REQUIRED)
# GLAD can be provided as a package or included as source.
find_package(glad CONFIG QUIET)
if(NOT glad_FOUND)
    message(FATAL_ERROR "GLAD not found. Provide GLAD library or source and update this CMake file.")
endif()

add_executable(opengl_game main.cpp)

target_link_libraries(opengl_game PRIVATE glfw glad glm::glm)

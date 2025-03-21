cmake_minimum_required(VERSION 3.30)
project(alpha_game_build_vastaria)

set(CMAKE_CXX_STANDARD 20)

add_executable(alpha_game_build_vastaria main.cpp
        SkillCategory.h
        movement.h
        movement.cpp)

find_package(raylib ${RAYLIB_VERSION} QUIET)
target_link_libraries(${PROJECT_NAME} raylib)
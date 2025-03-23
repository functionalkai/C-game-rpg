cmake_minimum_required(VERSION 3.30)
project(alpha_game_build_vastaria)

set(CMAKE_CXX_STANDARD 20)

add_executable(alpha_game_build_vastaria main.cpp
        SkillCategory.h
        movement.h
        movement.cpp)

include(FetchContent)

function(include_depend libName gitURL gitTag)
    FetchContent_Declare(${libName}
            GIT_REPOSITORY ${gitURL}
            GIT_TAG ${gitTag}
            GIT_SHALLOW TRUE
            GIT_PROGRESS TRUE
    )

    FetchContent_MakeAvailable(${libName})
endfunction()

set(LIB1 raylib)
find_package(${LIB1} QUIET)
if (NOT ${LIB1}_FOUND)
    include_depend(${LIB1} https://github.com/raysan5/raylib.git 5.5)
endif ()

target_include_directories(alpha_game_build_vastaria PRIVATE ${raylib_INCLUDE_DIRS})

target_link_libraries(alpha_game_build_vastaria PRIVATE ${LIB1})
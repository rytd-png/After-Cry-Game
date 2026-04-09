cmake_minimum_required(VERSION 3.15)

project(After-Cry-Game
        VERSION 0.2
        LANGUAGES CXX)

file(GLOB_RECURSE SOURCE_FILES "src/*.cpp" "src/*.h")

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

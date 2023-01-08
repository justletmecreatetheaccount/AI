cmake_minimum_required(VERSION 3.23)
project(AI)
set(CMAKE_CXX_STANDARD 20)

add_subdirectory(Nodes)
add_executable(AI main.cpp)

target_link_libraries(AI PUBLIC Node)
target_include_directories(AI PUBLIC
        "${PROJECT_BINARY_DIR}"
        "${PROJECT_SOURCE_DIR}/Nodes"
        )
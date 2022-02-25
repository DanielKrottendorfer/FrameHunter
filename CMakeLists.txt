
cmake_minimum_required(VERSION 3.10)

# set the project name
project(TestGame)

include_directories("${PROJECT_SOURCE_DIR}/src")
add_subdirectory(src)

# add the executable
add_executable(TestGame test.cpp)
target_link_libraries(TestGame FriendlyHareEngine)

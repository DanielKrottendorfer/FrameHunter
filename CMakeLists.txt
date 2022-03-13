
cmake_minimum_required(VERSION 3.10)

project(AwsomeGame)

include_directories("${PROJECT_SOURCE_DIR}/FrameHunter")
add_subdirectory(FrameHunter)

include_directories("${PROJECT_SOURCE_DIR}/AwsomeGame")
add_executable(AwsomeGame AwsomeGame/main.cpp)
target_link_libraries(AwsomeGame FrameHunter)

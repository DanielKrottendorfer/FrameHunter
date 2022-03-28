
cmake_minimum_required(VERSION 3.10)

project(AwsomeGame)
message("-------- ${PROJECT_SOURCE_DIR}")

include_directories("${PROJECT_SOURCE_DIR}/FrameHunter")
add_subdirectory(FrameHunter)

include_directories("${PROJECT_SOURCE_DIR}/AwsomeGame")
include_directories("${PROJECT_SOURCE_DIR}/FrameHunter/external/spdlog/include")
add_executable(AwsomeGame AwsomeGame/main.cpp)
target_link_libraries(AwsomeGame FrameHunter)

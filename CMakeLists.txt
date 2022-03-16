
cmake_minimum_required(VERSION 3.10)


include_directories("${PROJECT_SOURCE_DIR}/FrameHunter")
add_subdirectory(FrameHunter)


project(AwsomeGame)
message("----${PROJECT_SOURCE_DIR}")
include_directories("${PROJECT_SOURCE_DIR}/FrameHunter")
include_directories("${PROJECT_SOURCE_DIR}/FrameHunter/src/FHLog")
include_directories("${PROJECT_SOURCE_DIR}/FrameHunter/external/spdlog/include")
add_executable(AwsomeGame AwsomeGame/main.cpp)

target_link_libraries(AwsomeGame FrameHunter)

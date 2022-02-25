
cmake_minimum_required(VERSION 3.10)

project(AwsomeGame)

include_directories("${PROJECT_SOURCE_DIR}/FriendlyHare")
add_subdirectory(FriendlyHare)

include_directories("${PROJECT_SOURCE_DIR}/AwsomeGame")
add_executable(AwsomeGame AwsomeGame/main.cpp)

target_link_libraries(AwsomeGame FriendlyHareEngine)

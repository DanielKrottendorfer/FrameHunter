
message("-- Build FrameHunter")

project(FrameHunter)

include_directories("${PROJECT_SOURCE_DIR}/external/spdlog/include")
include_directories("${PROJECT_SOURCE_DIR}/external/SDL2/include")

add_library(FrameHunter SHARED src/Application.cpp src/FHLog.cpp src/SDLWindow.cpp)

set(SDL2_DIR external/SDL2)
find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

target_link_libraries(FrameHunter ${SDL2_LIBRARIES})

include_directories("${PROJECT_SOURCE_DIR}/external/SDL2/include")
target_precompile_headers(FrameHunter PRIVATE src/pch.hpp)

set_target_properties(FrameHunter PROPERTIES LINKER_LANGUAGE CXX)

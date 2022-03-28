
message("-- Build FrameHunter")

project(FrameHunter)



add_library(FrameHunter SHARED src/Application.cpp src/FHLog.cpp)


include_directories("${PROJECT_SOURCE_DIR}/external/spdlog/include")
include_directories("${PROJECT_SOURCE_DIR}/external/SDL2/include")
target_link_libraries(FrameHunter ${PROJECT_SOURCE_DIR}/external/SDL2/lib/x64)

target_precompile_headers(FrameHunter PUBLIC src/pch.hpp)

set_target_properties(FrameHunter PROPERTIES LINKER_LANGUAGE CXX)

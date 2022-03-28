
message("-- Build FrameHunter")

project(FrameHunter)

include_directories("${PROJECT_SOURCE_DIR}/external/spdlog/include")

add_library(FrameHunter SHARED src/Application.cpp src/FHLog.cpp)

target_precompile_headers(FrameHunter PRIVATE src/pch.hpp)

# target_link_libraries(FrameHunter FHLog)

set_target_properties(FrameHunter PROPERTIES LINKER_LANGUAGE CXX)

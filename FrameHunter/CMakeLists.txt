
message("-- Build FrameHunter")
project(FrameHunter)
add_library(FrameHunter SHARED src/Application.cpp)
include_directories("${PROJECT_SOURCE_DIR}/external/spdlog/include")
include_directories("${PROJECT_SOURCE_DIR}/FrameHunter/src/FHLog")

add_subdirectory(src/FHLog)
target_link_libraries(FrameHunter FHLog)

#Wtarget_precompile_headers(FrameHunter REUSE_FROM FHLog)



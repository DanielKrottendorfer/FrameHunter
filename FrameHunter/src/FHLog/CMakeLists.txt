
message("-- Build FHLog")
include_directories("${PROJECT_SOURCE_DIR}/external/spdlog/include")
add_library(FHLog SHARED FHLog.cpp)

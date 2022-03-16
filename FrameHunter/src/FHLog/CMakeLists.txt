
message("-- Build FHLog")
add_library(FHLog SHARED FHLog.cpp)
include_directories("${PROJECT_SOURCE_DIR}/external/spdlog/include")

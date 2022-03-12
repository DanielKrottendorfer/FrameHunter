
message("-- Build FriendlyHare")
project(FriendlyHare)
add_library(FriendlyHare SHARED src/Application.cpp)

include_directories("${PROJECT_SOURCE_DIR}/external/spdlog/include")
add_subdirectory(src/FHLog)
target_link_libraries(FriendlyHare FHLog)
set_target_properties(FriendlyHare PROPERTIES LINKER_LANGUAGE CXX)

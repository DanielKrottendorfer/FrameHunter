
message("-- Build FrameHunter")
project(FrameHunter)
add_library(FrameHunter SHARED src/Application.cpp)

add_subdirectory(src/FHLog)
target_link_libraries(FrameHunter FHLog)
set_target_properties(FrameHunter PROPERTIES LINKER_LANGUAGE CXX)

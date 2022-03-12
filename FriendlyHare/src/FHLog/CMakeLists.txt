
message("-- Build FHLog")
add_library(FHLog SHARED FHLog.cpp)
set_target_properties(FriendlyHare PROPERTIES LINKER_LANGUAGE CXX)


message("-- Build FriendlyHareEngine")
add_library(FriendlyHareEngine SHARED FriendlyHareEngine.cpp)
set_target_properties(FriendlyHareEngine PROPERTIES LINKER_LANGUAGE CXX)

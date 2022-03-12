
message("-- Build FriendlyHareEngine")
project(FriendlyHareEngine)
add_library(FriendlyHareEngine SHARED src/Application.cpp)
set_target_properties(FriendlyHareEngine PROPERTIES LINKER_LANGUAGE CXX)

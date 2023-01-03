add_library(user STATIC user.cpp)
target_link_libraries(user PUBLIC dependency)

add_executable(HelloCpp HelloCpp.cpp)

target_link_libraries(HelloCpp PRIVATE statistics_static)
#target_link_libraries(HelloCpp PRIVATE statistics_shared)
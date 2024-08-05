add_executable(HelloCpp HelloCpp/HelloCpp.cpp)

target_link_libraries(HelloCpp PRIVATE Boost::headers)
add_library(statistics INTERFACE)

target_include_directories(statistics INTERFACE
  "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
  "$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>"
)

set_target_properties(statistics PROPERTIES
    PUBLIC_HEADER src/libsrc/Statistics/include/Statistics/DescriptiveStatistics.hpp
    POSITION_INDEPENDENT_CODE 1
)

target_link_libraries(statistics INTERFACE Boost::headers)
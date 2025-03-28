# Create a cmake object library target
add_library(statistics OBJECT DescriptiveStatistics.cpp)

# Add include directories to a target
target_include_directories(statistics PUBLIC
  "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
  "$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>"
)

# Link an external library as a private dependency to the current library target
target_link_libraries(statistics PRIVATE Boost::headers)

# Compile the cmake object library target in a shared library
set_target_properties(statistics PROPERTIES
    PUBLIC_HEADER src/libsrc/Statistics/include/Statistics/DescriptiveStatistics.hpp
    POSITION_INDEPENDENT_CODE 1
)

add_library(statistics_shared SHARED)
target_link_libraries(statistics_shared statistics)

# Compile the cmake object library target in a static library
add_library(statistics_static STATIC)
target_link_libraries(statistics_static statistics)
# Create a cmake object library target
add_library(statistics OBJECT DescriptiveStatistics.cpp)

# Add include directories to a target
target_include_directories(statistics PUBLIC
  "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
  "$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>"
)

# Linke external library as a private dependency to the current library target
target_link_libraries(statistics PRIVATE Boost::headers)

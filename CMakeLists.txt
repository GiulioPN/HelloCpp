cmake_minimum_required(VERSION 3.20)
project(HelloCpp)

set(CMAKE_CXX_STANDARD 20)

find_package(Boost 1.82.0 COMPONENTS system REQUIRED)
if(Boost_FOUND)
  message(STATUS "BOOST_ROOT: ${BOOST_ROOT}")
  message(STATUS "Boost_INCLUDE_DIRS: ${Boost_INCLUDE_DIRS}")
endif()

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(appsrc)
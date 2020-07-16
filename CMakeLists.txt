message(STATUS "The CMake version used is ${CMAKE_VERSION}")
cmake_minimum_required(VERSION 3.10...${CMAKE_VERSION})

# define project name and its description
project(Catch2_CMake_3_18_test)
message(STATUS "folder: ${PROJECT_NAME}")

# Set a default build type for single-configuration cmake generators if
# no build type is set.
if(NOT CMAKE_CONFIGURATION_TYPES AND NOT CMAKE_BUILD_TYPE)
	message(STATUS "Set default build type to Release")
	set(CMAKE_BUILD_TYPE Release)
endif ()

add_subdirectory(external/catch2 EXCLUDE_FROM_ALL)
add_executable(test_yes test_yes.cpp)
target_link_libraries(test_yes PRIVATE Catch2::Catch2)
ParseAndAddCatchTests(test_yes) # add_test with some magic
enable_testing()

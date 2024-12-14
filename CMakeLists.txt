
#==============================
#
#     Root CMakeLists.txt
#
#==============================



cmake_minimum_required(VERSION 3.6 FATAL_ERROR)

set(LOCAL_CMAKE_PROJECT_NAME "template")

project("${LOCAL_CMAKE_PROJECT_NAME}" VERSION 0.0.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")


include(FetchContent)


set(CLI_DEBUGGING OFF)
set(UNIT_TESTING OFF)

if(DEFINED CACHE{PROJECT_TESTING} AND PROJECT_TESTING)
	message(STATUS "${LOCAL_CMAKE_PROJECT_NAME} testing - enabled")
	set(UNIT_TESTING ON)
	enable_testing()
else()
	message(STATUS "${LOCAL_CMAKE_PROJECT_NAME} testing - disabled")
endif()

if(DEFINED CACHE{PROJECT_CLI_DEBUG} AND PROJECT_CLI_DEBUG)
	message(STATUS "${LOCAL_CMAKE_PROJECT_NAME} CLI debugging - enabled")
	set(CLI_DEBUGGING ON)

	if(CMAKE_BUILD_TYPE STREQUAL "Release")
		message(WARNING "Building CLI debugging executables on release?")
	endif()
else()
	message(STATUS "${LOCAL_CMAKE_PROJECT_NAME} CLI debugging - disabled")
endif()


#include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include")

#add_subdirectory(src)


if(UNIT_TESTING)
	add_subdirectory(3rdparty/googletest)
endif()

if(CLI_DEBUGGING OR UNIT_TESTING)
	add_subdirectory(tests)
endif()


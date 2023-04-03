cmake_minimum_required(VERSION 3.10)

# Set the project name and version
project(hello_world VERSION 1.0)

# Enable C++11 features
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find the Google Test library


# google test
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/912db742531bf82efb01194bc08140416e3b3467.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
# find_package(GTest REQUIRED)
# include(GoogleTest)

# Add the executable for the main program
add_executable(hello_world src/hello_world.cpp)

# Add the executable for the tests
add_executable(test_hello_world test/test_hello_world.cpp)

# Link the main program against the standard libraries
target_link_libraries(hello_world stdc++)

# Link the test program against the Google Test library and the standard libraries
target_link_libraries(test_hello_world gtest_main stdc++)

# Enable testing and register the tests
enable_testing()
add_test(NAME GetGreetingTest COMMAND test_hello_world)


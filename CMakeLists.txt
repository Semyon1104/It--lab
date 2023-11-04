cmake_minimum_required(VERSION 3.25)

if(MSVC)
    option(gtest_force_shared_crt "" TRUE)
endif(MSVC)

add_subdirectory(3rdparty/googletest)

set(current_project "temp_exec")
project(${current_project})


include_directories(modules)
add_subdirectory(modules)
add_subdirectory(samples)
add_subdirectory(tests)

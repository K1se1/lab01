cmake_minimum_required(VERSION 3.5.0)
project(lab01 VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

set(SOURCE_EXE main.cpp)	

set(SOURCE_LIB binhex.cpp)

add_executable(main main.cpp )
add_library(foo STATIC binhex.cpp)
target_link_libraries(main foo)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

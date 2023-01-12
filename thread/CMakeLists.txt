cmake_minimum_required(VERSION 3.23)
project(thread)

set(CMAKE_CXX_STANDARD 11)

find_package(Threads REQUIRED)
add_executable(thread thread.cpp )
add_executable(thread-re thread-re.cpp)
target_link_libraries(thread  Threads::Threads)
target_link_libraries(thread-re  Threads::Threads)

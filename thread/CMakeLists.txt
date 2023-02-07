cmake_minimum_required(VERSION 3.23)
project(thread)

set(CMAKE_CXX_STANDARD 11)

find_package(Threads REQUIRED)
add_executable(thread thread.cpp )
add_executable(thread-re thread-re.cpp)
add_executable(mutex_demo1_no_mutex mutex_demo1_no_mutex.cpp)
add_executable(mutex_demo2_with_mutex mutex_demo2_with_mutex.cpp)
add_executable(mutex_demo4_lock_guard mutex_demo4_lock_guard.cpp)

target_link_libraries(thread  Threads::Threads)
target_link_libraries(thread-re  Threads::Threads)
target_link_libraries(mutex_demo1_no_mutex Threads::Threads)
target_link_libraries(mutex_demo2_with_mutex Threads::Threads)
target_link_libraries(mutex_demo4_lock_guard Threads::Threads)

cmake_minimum_required(VERSION 4.0)
project(esami_c__)

set(CMAKE_CXX_STANDARD 20)

add_executable(esami_c__ main.cpp)
add_executable(shift_left arrays/01_reverse_array.cpp)
add_executable(compact arrays/02_compact.cpp)
add_executable(swap arrays/03_swap.cpp)


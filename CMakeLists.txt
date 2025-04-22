cmake_minimum_required(VERSION 3.10.0)
project(handbook VERSION 0.1.0 LANGUAGES C CXX)

#clang++ --std=c++20 -O3 -fsanitize=address,undefined -Wall -Wextra -Werror
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD 20)
add_compile_options(-fsanitize=address,undefined -Wall -Wextra -Werror)
add_link_options(-fsanitize=address,undefined -Wall -Wextra -Werror)

add_subdirectory(libs/utils)
add_subdirectory(apps/helloworld)
add_subdirectory(apps/2.1.1)
add_subdirectory(apps/2.1.2)

#add_executable(helloworld helloworld.cpp)

#include(CTest)
#enable_testing()

#install(TARGETS utils helloworld DESTINATION bin)
cmake_minimum_required(VERSION 3.10.0)
project(handbook VERSION 0.1.0 LANGUAGES C CXX)

#clang++ --std=c++20 -O3 -fsanitize=address,undefined -Wall -Wextra -Werror
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD 20)
add_compile_options(-fsanitize=address,undefined -Wall -Wextra -Werror)
add_link_options(-fsanitize=address,undefined -Wall -Wextra -Werror)

add_subdirectory(libs/utils)
add_subdirectory(apps/helloworld)
add_subdirectory(apps/testJS)

add_subdirectory(apps/2.1.1)
add_subdirectory(apps/2.1.2)

add_subdirectory(apps/2.2.1)
add_subdirectory(apps/2.2.2)

add_subdirectory(apps/2.3.1)
add_subdirectory(apps/2.3.2)
add_subdirectory(apps/2.3.3)
add_subdirectory(apps/2.3.4)
add_subdirectory(apps/2.3.5)
add_subdirectory(apps/2.3.6)
add_subdirectory(apps/2.3.7)

add_subdirectory(apps/2.4.1)
add_subdirectory(apps/2.4.2)
add_subdirectory(apps/2.4.3)
add_subdirectory(apps/2.4.4)
add_subdirectory(apps/2.4.5)
add_subdirectory(apps/2.4.6)

add_subdirectory(apps/testS1)
add_subdirectory(apps/testS2)

#add_executable(helloworld helloworld.cpp)

#include(CTest)
#enable_testing()

#install(TARGETS utils helloworld DESTINATION bin)
cmake_minimum_required(VERSION 3.2)

set(PROJECT_NAME Vulkan-First-Try)
project(${PROJECT_NAME})

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_BUILD_TYPE Release)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)

include_directories(${PROJECT_SOURCE_DIR}/external/include)
set(CMAKE_LIBRARY_PATH ${PROJECT_SOURCE_DIR}/external/library)

add_executable(${PROJECT_NAME} src/main.cpp)

add_library(application STATIC src/app/application.cpp)
add_library(window STATIC src/canvas/window/window.cpp)
add_library(pipline STATIC src/render/pipline/pipline.cpp)
add_library(shader STATIC src/render/resource/shader/shader.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE application)
target_link_libraries(window PRIVATE ${CMAKE_LIBRARY_PATH}/GLFW/lib-vc2022/glfw3.lib)

if(WIN32)
  target_link_libraries(application PRIVATE window)
endif()


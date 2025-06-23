cmake_minimum_required (VERSION 3.10)

project ("VulkanTutorial")

set(ROOT_DIR "${CMAKE_CURRENT_SOURCE_DIR}")
set(THIRD_PARTY_DIR "${ROOT_DIR}/3rdparty")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Vulkan REQUIRED)
# 检查是否找到Vulkan
if(Vulkan_FOUND)
    message(STATUS "Vulkan SDK Found: ${Vulkan_INCLUDE_DIRS}")
    message(STATUS "Vulkan Libraries: ${Vulkan_LIBRARIES}")
else()
    message(FATAL_ERROR "Could not find Vulkan SDK!")
endif()

add_subdirectory ("3rdparty")
add_subdirectory ("sources")

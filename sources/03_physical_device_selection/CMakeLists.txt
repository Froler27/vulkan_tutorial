set(TARGET_NAME vulkan03)

file(GLOB_RECURSE HEADER_FILES "*.h")
file(GLOB_RECURSE SOURCE_FILES "*.cpp")

add_executable(${TARGET_NAME} ${HEADER_FILES} ${SOURCE_FILES})

target_link_libraries(${TARGET_NAME} PUBLIC ${Vulkan_LIBRARIES})
target_link_libraries(${TARGET_NAME} PUBLIC glfw)

target_include_directories(${TARGET_NAME} PUBLIC ${Vulkan_INCLUDE_DIRS})
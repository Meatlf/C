cmake_minimum_required(VERSION 3.0.0)
project(Project VERSION 0.1.0)


#dubug 模式
set (CMAKE_C_FLAGS  "${CMAKE_C_FLAGS} -g")

# 添加头文件路径
# include_directories("${PROJECT_SOURCE_DIR}/project0")

add_executable(Stack_around_the_variable_XXX_was_corrupted ./Stack_around_the_variable_XXX_was_corrupted.c)

# 添加子目录
# add_subdirectory(project0)

# 添加project0库
# target_link_libraries(test_project0 project0)

###############
# Hello tests #
###############

add_executable(hello_test HelloTest.cpp)
target_link_libraries(hello_test PRIVATE hello)

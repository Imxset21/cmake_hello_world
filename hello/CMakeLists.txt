#################
# Hello Library #
#################

# Source files to be used in the library
set(hello_SOURCES
    Hello.cpp
)

set(hello_HEADERS
    Hello.h
)

# Generate the static library from the library sources
add_library(hello STATIC ${hello_SOURCES})

target_link_libraries(hello glog)
target_link_libraries(hello gflags)
target_link_libraries(hello gtest)

target_compile_features(hello PUBLIC cxx_nullptr cxx_return_type_deduction)

target_include_directories(hello PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

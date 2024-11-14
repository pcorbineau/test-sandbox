set(INC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include/lib)

add_library(lib)

target_sources(lib
    PUBLIC
        ${INC_DIR}/math.hpp
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src/math.cpp
)

target_include_directories(lib
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src
)

target_compile_features(lib
    PUBLIC
        cxx_std_23
)

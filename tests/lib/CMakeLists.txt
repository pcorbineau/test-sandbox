# GTEST test
find_package(GTest REQUIRED)
add_executable(lib-gtest)

target_sources(lib-gtest PRIVATE
    test_gtest.cpp
)

target_link_libraries(lib-gtest PRIVATE
    lib
    GTest::gtest
    GTest::gtest_main
)

include(CTest)
include(GoogleTest)
gtest_discover_tests(lib-gtest)

# CATCH2 test
find_package(Catch2 REQUIRED)
add_executable(lib-catch2)

target_sources(lib-catch2 PRIVATE
    test_catch2.cpp
)

target_link_libraries(lib-catch2 PRIVATE
    lib
    Catch2::Catch2WithMain
)

include(CTest)
include(Catch)
catch_discover_tests(lib-catch2)

#doctest test
find_package(doctest REQUIRED)
add_executable(lib-doctest)

target_sources(lib-doctest PRIVATE
    test_doctest.cpp
)

target_link_libraries(lib-doctest PRIVATE
    lib
    doctest::doctest
)

include(CTest)
include(doctest)
doctest_discover_tests(lib-doctest)

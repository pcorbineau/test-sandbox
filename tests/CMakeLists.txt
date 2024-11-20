set(ENABLE_GTEST ON)
set(ENABLE_DOCTEST ON)
set(ENABLE_CATCH2 ON)

# GTEST test
if (ENABLE_GTEST)
    message(STATUS "GTEST is enabled")
find_package(GTest REQUIRED)
add_executable(lib-gtest)

target_sources(lib-gtest PRIVATE
    gtest_test.cpp
)

target_link_libraries(lib-gtest PRIVATE
    lib
    GTest::gtest
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(lib-gtest)

endif()

# CATCH2 test
if (ENABLE_CATCH2)
    message(STATUS "CATCH2 is enabled")
find_package(Catch2 REQUIRED)
add_executable(lib-catch2)

target_sources(lib-catch2 PRIVATE
    catch2_test.cpp
)

target_link_libraries(lib-catch2 PRIVATE
    lib
    Catch2::Catch2WithMain
)

include(Catch)
catch_discover_tests(lib-catch2)
endif()

#doctest test
if (ENABLE_DOCTEST)
    message(STATUS "DOCTEST is enabled")
find_package(doctest REQUIRED)
add_executable(lib-doctest)

target_sources(lib-doctest PRIVATE
    doctest_test.cpp
)

target_link_libraries(lib-doctest PRIVATE
    lib
    doctest::doctest
)

include(doctest)
doctest_discover_tests(lib-doctest)
endif()

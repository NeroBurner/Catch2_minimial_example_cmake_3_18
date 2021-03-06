cmake_minimum_required(VERSION 3.1)

project(Catch2 LANGUAGES CXX VERSION 2.5.0)

add_library(Catch2 INTERFACE)

# depend on some obvious c++11 features so the dependency is transitively added dependents
target_compile_features(Catch2
  INTERFACE
    cxx_alignas
    cxx_alignof
    cxx_attributes
    cxx_auto_type
    cxx_constexpr
    cxx_defaulted_functions
    cxx_deleted_functions
    cxx_final
    cxx_lambdas
    cxx_noexcept
    cxx_override
    cxx_range_for
    cxx_rvalue_references
    cxx_static_assert
    cxx_strong_enums
    cxx_trailing_return_types
    cxx_unicode_literals
    cxx_user_literals
    cxx_variadic_macros
)

target_include_directories(Catch2
  INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}>
)

# provide a namespaced alias for clients to 'link' against if catch is included as a sub-project
add_library(Catch2::Catch2 ALIAS Catch2)

include(./contrib/ParseAndAddCatchTests.cmake)

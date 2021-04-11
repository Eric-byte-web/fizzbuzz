# --- Import tools ----

include(../../../cmake/CPM.cmake)

# ---- Dependencies ----

CPMAddPackage(
        NAME Catch2
        GITHUB_REPOSITORY catchorg/Catch2
        VERSION 2.13.4
)

# ---- Create executable ----

add_executable(fizzbuzz-5-tests fizzbuzz-tests.cpp)
target_link_libraries(fizzbuzz-5-tests PRIVATE project_options project_warnings libfizzbuzz Catch2)

# --- Import tools ----

include(../../cmake/CPM.cmake)

# ---- Dependencies ----

CPMAddPackage(
        NAME Catch2
        GITHUB_REPOSITORY catchorg/Catch2
        VERSION 2.13.4
)

# ---- Create standalone executable ----

add_executable(fizzbuzz-3-tests main.cpp)
target_link_libraries(fizzbuzz-3-tests PRIVATE project_options project_warnings Catch2)

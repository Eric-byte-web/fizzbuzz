# --- Import tools ----

include(../../../cmake/CPM.cmake)

# ---- Dependencies ----

# ---- Create executable ----

add_executable(fizzbuzz-5-demo main.cpp)
target_link_libraries(fizzbuzz-5-demo PRIVATE project_options project_warnings libfizzbuzz fmt::fmt)

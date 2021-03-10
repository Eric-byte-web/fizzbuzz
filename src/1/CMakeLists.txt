# --- Import tools ----

include(../../cmake/CPM.cmake)

# ---- Dependencies ----

# ---- Create standalone executable ----

add_executable(fizzbuzz-1 main.cpp)
target_link_libraries(fizzbuzz-1 PRIVATE project_options project_warnings)

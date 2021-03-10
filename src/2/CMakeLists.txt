# --- Import tools ----

include(../../cmake/CPM.cmake)

# ---- Dependencies ----

# ---- Create standalone executable ----

add_executable(fizzbuzz-2 main.cpp)
target_link_libraries(fizzbuzz-2 PRIVATE project_options project_warnings)

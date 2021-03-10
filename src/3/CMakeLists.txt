# --- Import tools ----

include(../../cmake/CPM.cmake)

# ---- Dependencies ----

# ---- Create standalone executable ----

add_executable(fizzbuzz-3 main.cpp)
target_link_libraries(fizzbuzz-3 PRIVATE project_options project_warnings fmt::fmt spdlog::spdlog)

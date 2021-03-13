# --- Import tools ----

include(../../cmake/CPM.cmake)

# ---- Dependencies ----

# ---- Create executable ----

add_executable(fizzbuzz-5 main.cpp lib/src/fizzbuzz.cpp)
target_include_directories(fizzbuzz-5 PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/lib/include/>)
target_link_libraries(fizzbuzz-5 PRIVATE project_options project_warnings)

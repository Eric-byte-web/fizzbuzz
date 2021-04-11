CPMAddPackage(
        NAME fmt
        GIT_TAG 7.1.3
        GITHUB_REPOSITORY fmtlib/fmt
        OPTIONS "FMT_INSTALL YES" # create an installable target
)

# ---- Add source files ----

# Note: globbing sources is considered bad practice as CMake's generators may not detect new files
# automatically. Keep that in mind when changing files, or explicitly mention them here.
file(GLOB_RECURSE headers CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/include/*.h")
file(GLOB_RECURSE sources CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

# ---- Create library ----

add_library(libfizzbuzz ${headers} ${sources})

set_target_properties(libfizzbuzz PROPERTIES CXX_STANDARD 20)

# Link dependencies
target_link_libraries(libfizzbuzz PRIVATE)

target_include_directories(
        libfizzbuzz PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
)
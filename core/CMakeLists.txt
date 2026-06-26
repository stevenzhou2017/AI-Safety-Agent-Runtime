add_library(runtime_core SHARED
    src/runtime.cpp
    src/guard.cpp
)

target_include_directories(runtime_core PUBLIC include)

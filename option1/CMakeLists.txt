
cmake_minimum_required(VERSION 3.20)
project(HeaderShadowMock LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Toggle mock usage
option(USE_MOCK "Build with mock service.hpp" OFF)

add_executable(app
    production/src/main.cpp
)

if (USE_MOCK)
    message(STATUS "Building with MOCK service")
    target_include_directories(app
        PRIVATE
            test/include          # MUST come first (shadow)
            production/include
    )
else()
    message(STATUS "Building with REAL service")
    target_include_directories(app
        PRIVATE
            production/include
    )
endif()


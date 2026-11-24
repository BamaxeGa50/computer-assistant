cmake_minimum_required(VERSION 3.16)
project(computer-assistant CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(computerassistant
    src/main.cpp
    src/voice.cpp
    src/diag.cpp
    src/fixer.cpp
    src/cli.cpp
)

target_include_directories(computerassistant PRIVATE include)

if(WIN32)
    target_link_libraries(computerassistant PRIVATE userenv)
endif()

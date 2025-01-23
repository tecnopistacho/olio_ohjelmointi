cmake_minimum_required(VERSION 3.16)
project(Practice_2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Fix: Remove commas between source files
add_executable(Practice_2 main.cpp game.cpp
    game.h)

include(GNUInstallDirs)
install(TARGETS Practice_2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

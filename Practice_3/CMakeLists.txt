cmake_minimum_required(VERSION 3.16)

project(Practice_3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Practice_3 main.cpp
    chef.h chef.cpp
    italianchef.h italianchef.cpp)

include(GNUInstallDirs)
install(TARGETS Practice_3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

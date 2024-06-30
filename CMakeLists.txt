cmake_minimum_required(VERSION 3.5)

project(shapeInfo LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(shapeInfo main.cpp
    shape.h

    circle.h
    rectangle.h

)

include(GNUInstallDirs)
install(TARGETS shapeInfo
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

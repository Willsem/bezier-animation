cmake_minimum_required(VERSION 3.1.0)

project(bezier)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_AUTOUIC_SEARCH_PATHS
    "gui"
)

set(GUI
    gui/mainwindow.ui
)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(HEADERS
    include/View/mainwindow.h
)

set(SOURCES
    source/main.cc
    source/View/mainwindow.cc
)

find_package(Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt5OpenGL REQUIRED)
find_package(OpenGL)

add_executable(bezier
    ${SHADERS}
    ${HEADERS}
    ${SOURCES}
)

target_include_directories(bezier
    PUBLIC
        "include"
)

target_link_libraries(bezier Qt5::Widgets Qt5::OpenGL ${OPENGL_LIBRARIES})

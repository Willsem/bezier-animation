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
    include/View/OpenGLWidget.h
    include/Model/Facade.h
    include/Model/Drawer/Drawer.h
    include/Model/Drawer/OpenGLDrawer.h
    include/Model/Managers/Manager.h
    include/Model/Managers/DrawManager.h
    include/Model/Managers/movemanager.h
    include/Commands/Command.h
    include/Commands/Draw.h
)

set(SOURCES
    source/main.cc
    source/View/mainwindow.cc
    source/View/OpenGLWidget.cc
    source/Model/Facade.cc
    source/Model/Drawer/OpenGLDrawer.cc
    source/Model/Managers/DrawManager.cc
    source/Commands/Draw.cc
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

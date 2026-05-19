cmake_minimum_required(VERSION 3.16)

project(ModernCppLab LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 REQUIRED COMPONENTS Core Gui Widgets)

add_executable(qt_app
    main.cpp
    MainWindow.h
    MainWindow.cpp
)

target_link_libraries(qt_app
    PRIVATE
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
)
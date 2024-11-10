cmake_minimum_required(VERSION 3.16)
project(DentalApp LANGUAGES CXX)

include(qt.cmake)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR}
    COMPONENTS
        Core
        Gui
        Widgets
)
qt_standard_project_setup()

set(PROJECT_SOURCES
    main.cpp
    DentalApp.ui
    DentalApp.h
    DentalApp.cpp
)

qt_add_executable(DentalApp ${PROJECT_SOURCES})

set_target_properties(DentalApp
    PROPERTIES
        WIN32_EXECUTABLE TRUE
)

target_link_libraries(DentalApp
    PUBLIC
        Qt::Core
        Qt::Gui
        Qt::Widgets
)

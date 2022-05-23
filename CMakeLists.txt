cmake_minimum_required(VERSION 3.5)

project(IN_cuba LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME} "main.cpp" "DB_local.cpp" "DB_local.h"
"main_gui.cpp" "Sensor.cpp" "Sensor.h" "Incubadora.cpp" "Incubadora.h")

target_link_libraries (${PROJECT_NAME} sqlite3 mysqlclient Qt5::Core )

add_executable(${PROJECT_NAME}_gui "main.cpp" "DB_local.cpp" "DB_local.h"
"main_gui.cpp" "Sensor.cpp" "Sensor.h" "Incubadora.cpp" "Incubadora.h" "mainwindow.h" "mainwindow.cpp" "mainwindow.ui")


target_link_libraries(IN_cuba PRIVATE Qt5::Widgets)

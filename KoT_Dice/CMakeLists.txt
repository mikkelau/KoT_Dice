cmake_minimum_required(VERSION 3.4)
project(KoT_Dice)


FIND_PACKAGE(Qt5Widgets)
FIND_PACKAGE(Qt5Gui)
FIND_PACKAGE(QT5OpenGL)
FIND_PACKAGE(VTK REQUIRED)
include(${VTK_USE_FILE})

include_directories(${VTK_INCLUDE_DIRS})

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED 1)

SET(CMAKE_INCLUDE_CURRENT_DIR ON)
SET(CMAKE_AUTOMOC ON)
SET(CMAKE_AUTOUIC ON)
SET(CMAKE_AUTORCC ON)


SET(MYSOURCE
    main.cpp
    mainwindow.h
    mainwindow.cpp
    mainwindow.ui
#    mouseinteractorstyle.h
#    mouseinteractorstyle.cpp
    )
add_executable(${PROJECT_NAME}
    ${MYSOURCE}
    ${MY_RES}
    )


target_link_libraries(${PROJECT_NAME}
    ${VTK_LIBRARIES}
    Qt5::Widgets
    Qt5::Gui
    Qt5::OpenGL
)

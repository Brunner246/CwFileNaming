cmake_minimum_required(VERSION 3.24)
project(3dNaming)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)
#
#set(UI
#        c3dnamingdialog.ui
#        )
#
#qt5_wrap_ui(UI_HEADERS ${UI_FILE})
#
#set(HEADERS
#        c3dnamingdialog.h
#        )
#
#set(SOURCES
#        c3dnamingdialog.cpp
#        ${UI_HEADERS}
#        )
#
#
#
#set(RESOURCES
## 3dNaming.qrc
#    )

# add_executable(3dNaming main.cpp ${SOURCE_FILES} ${HEADER_FILES} ${UI_FILES} ${RESOURCES})

add_executable(3dNaming main.cpp c3dnamingdialog.cpp c3dnamingdialog.h c3dnamingdialog.ui)
target_include_directories(3dNaming PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(3dNaming
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        )


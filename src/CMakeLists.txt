cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

target_include_directories(${CMAKE_PROJECT_NAME}
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/ui/mainwindows
    ${CMAKE_CURRENT_SOURCE_DIR}/ui/mainwindows/toolbars
    ${CMAKE_CURRENT_SOURCE_DIR}/ui/mainwindows/docks
    ${CMAKE_CURRENT_SOURCE_DIR}/ui/mainwindows/menubars
    ${CMAKE_CURRENT_SOURCE_DIR}/ui/mainwindows/menus
    ${CMAKE_CURRENT_SOURCE_DIR}/ui/mainwindows/statusbars

    ${CMAKE_CURRENT_SOURCE_DIR}/ui/glrenderwidgets

    ${CMAKE_CURRENT_SOURCE_DIR}/ui/filestructures/filetrees
    ${CMAKE_CURRENT_SOURCE_DIR}/ui/filestructures/filelists
    ${CMAKE_CURRENT_SOURCE_DIR}/ui/filestructures/filelists/menus
    ${CMAKE_CURRENT_SOURCE_DIR}/ui/filestructures/filelists/models

)

target_sources(${CMAKE_PROJECT_NAME}
    PUBLIC

    #MAINWINDOW
    #WINDOWS
    ${CMAKE_CURRENT_SOURCE_DIR}/ui/mainwindows/wbde_window.cpp
    
    #TOOLBARS
    ${CMAKE_CURRENT_SOURCE_DIR}/ui/mainwindows/toolbars/wbde_toptoolbar.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ui/mainwindows/toolbars/wbde_lefttoolbar.cpp

    #DOCKS
    ${CMAKE_CURRENT_SOURCE_DIR}/ui/mainwindows/docks/wbde_leftdock.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ui/mainwindows/docks/wbde_bottomdock.cpp

    #MENUBARS/MENUS
    ${CMAKE_CURRENT_SOURCE_DIR}/ui/mainwindows/menubars/wbde_topmenubar.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ui/mainwindows/menus/wbde_filemenu.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ui/mainwindows/menus/wbde_windowmenu.cpp

    #STATUSBARS
    ${CMAKE_CURRENT_SOURCE_DIR}/ui/mainwindows/statusbars/wbde_statusbar.cpp

    #RENDERWIDGETS
    ${CMAKE_CURRENT_SOURCE_DIR}/ui/glrenderwidgets/abstractglrender_widget.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ui/glrenderwidgets/glrender_widget.cpp

    ${CMAKE_CURRENT_SOURCE_DIR}/ui/filestructures/filetrees/wbde_filetree.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ui/filestructures/filelists/wbde_filelist.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ui/filestructures/filelists/menus/filelistmenu.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ui/filestructures/filelists/models/wbde_filelistmodel.cpp
)

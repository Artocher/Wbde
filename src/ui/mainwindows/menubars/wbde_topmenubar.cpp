#include "wbde_topmenubar.h"

WbdeTopMenuBar::WbdeTopMenuBar(){
    _fileMenu = new WbdeFileMenu();
    _windowMenu = new WbdeWindowMenu();

    addMenu(_fileMenu);
    addMenu(_windowMenu);
}

WbdeTopMenuBar::~WbdeTopMenuBar(){

}
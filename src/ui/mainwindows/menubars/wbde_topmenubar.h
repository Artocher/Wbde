#ifndef WBDE_TOPMENUBAR_H
#define WBDE_TOPMENUBAR_H

#include <QMenuBar>
#include "wbde_filemenu.h"
#include "wbde_windowmenu.h"

class WbdeTopMenuBar : public QMenuBar{
    public:
        WbdeTopMenuBar();
        ~WbdeTopMenuBar();
    private:
        WbdeFileMenu* _fileMenu;
        WbdeWindowMenu* _windowMenu;
};

#endif
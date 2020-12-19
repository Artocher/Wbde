#ifndef WBDE_WINDOW_H
#define WBDE_WINDOW_H

#include <QMainWindow>


#include <QScreen>
#include <memory>

#include <QMenuBar>
#include <wbde_topmenubar.h>

#include <wbde_toptoolbar.h>
#include <wbde_lefttoolbar.h>

#include <wbde_leftdock.h>
#include <wbde_bottomdock.h>

#include <wbde_statusbar.h>


#include "abstractglrender_widget.h"

class WbdeWindow : public QMainWindow{
    public:
        WbdeWindow();
        ~WbdeWindow();
        void resizeEvent(QResizeEvent* event) override;
    private:
        std::unique_ptr<QScreen*> _screen;

        WbdeTopMenuBar* _wbdeTopMenuBar;
        WbdeTopToolBar* _wbdeTopToolBar;
        WbdeLeftToolBar* _wbdeLeftToolBar;

        WbdeLeftDock* _wbdeLeftDock;
        WbdeBottomDock* _wbdeBottomDock;

        WbdeStatusBar* _wbdeStatusBar;
        
        AbstractGLRenderWidget* _glrenderWidget;
};

#endif
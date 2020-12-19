#include "wdbe_window.h"

#include <QGuiApplication>
#include <iostream>

#include "glrender_widget.h"

WbdeWindow::WbdeWindow(){
    _screen = std::make_unique<QScreen*>(QGuiApplication::primaryScreen());
    setMinimumSize(1280,800);
    setPalette(QPalette(QColor(60,60,60)));

    //Central Widget
    _glrenderWidget = new GLRenderWidget();
    setCentralWidget(_glrenderWidget);

    //Docks
    _wbdeLeftDock = new WbdeLeftDock(this);
    _wbdeBottomDock = new WbdeBottomDock(this);
    //addDockWidget(Qt::LeftDockWidgetArea, _wbdeLeftDock);
    addDockWidget(Qt::BottomDockWidgetArea, _wbdeBottomDock);

    //Menus
    _wbdeTopMenuBar = new WbdeTopMenuBar();
    setMenuBar(_wbdeTopMenuBar);

    //ToolBars
    _wbdeTopToolBar = new WbdeTopToolBar();
    _wbdeLeftToolBar = new WbdeLeftToolBar();
    addToolBar(Qt::TopToolBarArea, _wbdeTopToolBar);
    addToolBar(Qt::LeftToolBarArea, _wbdeLeftToolBar);

    //StatusBar
    _wbdeStatusBar = new WbdeStatusBar();
    setStatusBar(_wbdeStatusBar);
}

WbdeWindow::~WbdeWindow(){

}

void WbdeWindow::resizeEvent(QResizeEvent* event){
    QPoint wc = this->mapToGlobal(QPoint(0,0));
    QPoint dc = _wbdeBottomDock->mapToGlobal(QPoint(0,0));

    _wbdeBottomDock->setFixedSize(this->width() - (dc.x() - wc.x()), this->height()*0.3);
}
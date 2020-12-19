#include "wbde_toptoolbar.h"

WbdeTopToolBar::WbdeTopToolBar(){
    _test = new QAction();
    _test->setIcon(QIcon("start.png"));
    addAction(_test);
}

WbdeTopToolBar::~WbdeTopToolBar(){
    
}
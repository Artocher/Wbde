#include "wbde_lefttoolbar.h"

WbdeLeftToolBar::WbdeLeftToolBar(){
    _test = new QAction();
    _test->setIcon(QIcon("clipart847239.png"));
    addAction(_test);
}

WbdeLeftToolBar::~WbdeLeftToolBar(){
    
}
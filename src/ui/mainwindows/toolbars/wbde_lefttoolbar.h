#ifndef WBDE_LEFTTOOLBAR_H
#define WBDE_LEFTTOOLBAR_H

#include <QToolBar>
#include <QAction>

class WbdeLeftToolBar : public QToolBar{
    public:
        WbdeLeftToolBar();
        ~WbdeLeftToolBar();
    private: 
        QAction* _test;
};

#endif
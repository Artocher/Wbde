#ifndef WBDE_TOPTOOLBAR_H
#define WBDE_TOPTOOLBAR_H

#include <QToolBar>
#include <QAction>

class WbdeTopToolBar : public QToolBar{
    public:
        WbdeTopToolBar();
        ~WbdeTopToolBar();
    private: 
        QAction* _test;
};

#endif
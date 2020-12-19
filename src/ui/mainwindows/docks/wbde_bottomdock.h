#ifndef WBDE_BOTTOMDOCK_H
#define WBDE_BOTTOMDOCK_H

#include <QDockWidget>
#include <QGridLayout>

#include "wbde_filetree.h"
#include "wbde_filelist.h"

class WbdeBottomDock : public QDockWidget{
    public: 
        WbdeBottomDock(QWidget* parent);
        ~WbdeBottomDock();
        void resizeEvent(QResizeEvent* event);
    private:
        QWidget* _container;
        QGridLayout* _layout;

        WbdeFileTree* _wbdeFileTree;
        WbdeFileList* _wbdeFileList;
};

#endif
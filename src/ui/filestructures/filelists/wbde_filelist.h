#ifndef WBDE_FILELIST_H
#define WBDE_FILELIST_H

#include <QListWidget>
#include <QMouseEvent>
#include <QKeyEvent>
#include <QMap>

#include "filelistmenu.h"
#include "wbde_filelistmodel.h"

class WbdeFileList : public QListWidget{
    Q_OBJECT
    public:
        WbdeFileList();
        ~WbdeFileList();
        void mousePressEvent(QMouseEvent* event);
        void keyPressEvent(QKeyEvent* event);
    public slots:
        void createDirectory();
    signals:
        void createdDirectory(QString dirName);
    private:
        FileListMenu* _fileListMenu;
        QMap<int, WbdeFileListModel*> _models;


};

#endif
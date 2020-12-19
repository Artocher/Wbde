#ifndef WBDE_FILETREE_H
#define WBDE_FILETREE_H

#include <QTreeWidget>
#include <QDir>
#include <QMouseEvent>

class WbdeFileTree : public QTreeWidget{
    Q_OBJECT
    public:
        WbdeFileTree();
        ~WbdeFileTree();
    public slots:
        void createDirectory(QString dirName);

    private:
        QDir* _projectRootDir;
};

#endif
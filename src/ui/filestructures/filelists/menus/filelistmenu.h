#ifndef FILELISTMENU_H
#define FILELISTMENU_H

#include <QMenu>

class FileListMenu : public QMenu{
    public:
        FileListMenu(QWidget* widget = nullptr);
        ~FileListMenu();

        QAction* getCreateDirectory();
        QAction* getCreateModel();
        QAction* getCreateMaterial();
        QAction* getImportTexture();
    private:
        QAction* _createDirectory;
        QAction* _createModel;
        QAction* _createMaterial;
        QAction* _importTexture;

};

#endif
#include "filelistmenu.h"

FileListMenu::FileListMenu(QWidget* widget) : QMenu(widget){    
    _createDirectory = new QAction("Create directory");
    _createModel = new QAction("Create model");
    _createMaterial = new QAction("Create material");
    _importTexture = new QAction("Import texture");

    addAction(_createDirectory);
    addAction(_createModel);
    addAction(_createMaterial);
    addAction(_importTexture);
}

FileListMenu::~FileListMenu(){

}

QAction* FileListMenu::getCreateDirectory(){
    return _createDirectory;
}

QAction* FileListMenu::getCreateModel(){
    return _createModel;
}

QAction* FileListMenu::getCreateMaterial(){
    return _createMaterial;
}

QAction* FileListMenu::getImportTexture(){
    return _importTexture;
}

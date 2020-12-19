#include "wbde_filelist.h"

#include <iostream>
#include <QListWidgetItem>

WbdeFileList::WbdeFileList(){
    _fileListMenu = new FileListMenu(this);
    
    //List settings
    setViewMode(QListView::IconMode);
    setSpacing(10); 
    setIconSize(QSize(60,60));
    setUniformItemSizes(true);
    setMovement(QListView::Static);
    setEditTriggers(QAbstractItemView::DoubleClicked);
    setSelectionMode(QAbstractItemView::ExtendedSelection);
    setSelectionRectVisible(true);

    //Model
    WbdeFileListModel* model = new WbdeFileListModel();
    _models.insert(0, model);
    setModel(model);

    connect(_fileListMenu->getCreateDirectory(), &QAction::triggered, this, &WbdeFileList::createDirectory);
}
 
WbdeFileList::~WbdeFileList(){

}

void WbdeFileList::mousePressEvent(QMouseEvent* event){
    QListWidget::mousePressEvent(event);

    if (event->button() == Qt::RightButton)
        _fileListMenu->popup(this->mapToGlobal(event->pos()));
}

void WbdeFileList::keyPressEvent(QKeyEvent* event){
    if(event->key() == Qt::Key_Delete){
        auto items = selectedItems();
        std::cout << items.size() << std::endl;
        for(int i=0; i<items.size(); i++)
            delete items[i];
    }
}

void WbdeFileList::createDirectory(){
    auto listItem = new QListWidgetItem(QIcon("directory.png"), "New directory");
    listItem->setSizeHint(QSize(80,80));
    listItem->setFlags(listItem->flags()|Qt::ItemIsEditable);
    model()->insertRow(0,indexFromItem(listItem)); 
    //addItem(listItem);

    emit createdDirectory(QString("Ha"));
}
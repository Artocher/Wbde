#include "wbde_bottomdock.h"
#include <QPushButton>

WbdeBottomDock::WbdeBottomDock(QWidget* parent) : QDockWidget(parent){
    setAllowedAreas(Qt::BottomDockWidgetArea);
    setFeatures(QDockWidget::NoDockWidgetFeatures);

    _container = new QWidget();
    _container->setFixedSize(this->width(), this->height());

    _wbdeFileTree = new WbdeFileTree();
    _wbdeFileList = new WbdeFileList();

    _layout = new QGridLayout();
    _layout->addWidget(_wbdeFileTree,0,0,1,3);
    _layout->addWidget(_wbdeFileList,0,4,1,7);

    _container->setLayout(_layout);
    _layout->setSizeConstraint(QLayout::SetMaximumSize);

    connect(_wbdeFileList, &WbdeFileList::createdDirectory, _wbdeFileTree, &WbdeFileTree::createDirectory);

    setWidget(_container);
}

WbdeBottomDock::~WbdeBottomDock(){
    
}

void WbdeBottomDock::resizeEvent(QResizeEvent* event){
    _container->resize(this->width(), this->height());
}
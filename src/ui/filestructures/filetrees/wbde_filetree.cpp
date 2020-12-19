#include "wbde_filetree.h"

#include <iostream>

WbdeFileTree::WbdeFileTree(){
    setHeaderLabel("Directories");

    _projectRootDir = new QDir("/home/benjamin/Desktop/screenAO");
}

WbdeFileTree::~WbdeFileTree(){
    
}

void WbdeFileTree::createDirectory(QString dirName){
    std::cout << "Directory created" << std::endl;
}
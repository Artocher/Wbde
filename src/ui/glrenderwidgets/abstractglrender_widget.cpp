#include "abstractglrender_widget.h"

AbstractGLRenderWidget::AbstractGLRenderWidget(){

}

AbstractGLRenderWidget::~AbstractGLRenderWidget(){
    makeCurrent();
    doneCurrent();
}

void AbstractGLRenderWidget::initializeGL(){

}

void AbstractGLRenderWidget::resizeGL(int w, int h){

}

void AbstractGLRenderWidget::paintGL(){

}
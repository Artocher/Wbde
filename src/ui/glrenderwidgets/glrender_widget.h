#ifndef GLRENDER_WIDGET_H
#define GLRENDER_WIDGET_H

#include "abstractglrender_widget.h"

class GLRenderWidget : public AbstractGLRenderWidget{
    public:
        GLRenderWidget();
        ~GLRenderWidget() override;
        
        void initializeGL() override;
        void resizeGL(int w, int h) override;
        void paintGL() override;

        void keyPressEvent(QKeyEvent* event) override;
        void keyReleaseEvent(QKeyEvent* event) override;
        void mousePressEvent(QMouseEvent* event) override;
        void mouseMoveEvent(QMouseEvent* event) override; 
    protected: 
};

#endif
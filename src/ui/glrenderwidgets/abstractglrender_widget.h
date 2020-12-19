#ifndef ABSTRACTGLRENDER_WIDGET_H
#define ABSTRACTGLRENDER_WIDGET_H

#include <QOpenGLWidget>

class AbstractGLRenderWidget : public QOpenGLWidget{
    public:
        AbstractGLRenderWidget();
        virtual ~AbstractGLRenderWidget();

        void initializeGL() override;
        void resizeGL(int w, int h) override;
        void paintGL() override;

        void keyPressEvent(QKeyEvent* event) = 0;
        void keyReleaseEvent(QKeyEvent* event) = 0;
	    void mousePressEvent(QMouseEvent* event) = 0;
	    void mouseMoveEvent(QMouseEvent* event) = 0;
        
    protected:
};

#endif
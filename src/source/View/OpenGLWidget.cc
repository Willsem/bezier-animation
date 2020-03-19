#include "View/OpenGLWidget.h"

OpenGLWidget::OpenGLWidget(QWidget *parent)
    : QOpenGLWidget(parent) { }

void OpenGLWidget::initializeGL()
{
    glClearColor(0.2f, 0.2f, 0.2f, 1.0f);
}

void OpenGLWidget::resizeGL(int newWidth, int newHeight)
{
}

void OpenGLWidget::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(255, 0, 0);
    glLineWidth(5);

}

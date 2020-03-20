#include "View/OpenGLWidget.h"
#include "Model/Drawer/OpenGLDrawer.h"

OpenGLWidget::OpenGLWidget(QWidget *parent)
    : QOpenGLWidget(parent) { }

void OpenGLWidget::setFacade(Facade *facade)
{
    _facade = facade;
}

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
    glLineWidth(3.0f);

    Draw(*this).execute(*_facade);
    OpenGLDrawer d(*this);
    d.drawLine(QVector2D(0.0, 0.0), QVector2D(0.5, 0.5));
}

void OpenGLWidget::drawLine(const QVector2D &a, const QVector2D &b)
{
    glBegin(GL_LINES);
        glVertex2f(a.x(), a.y());
        glVertex2f(b.x(), b.y());
    glEnd();
}

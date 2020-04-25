#include "View/OpenGLWidget.h"

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

void OpenGLWidget::resizeGL(int width, int height)
{
}

void OpenGLWidget::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(255, 0, 0);
    glLineWidth(3.0f);

    Draw(*this).execute(*_facade);
}

void OpenGLWidget::setLineWidth(const float w)
{
    glLineWidth(w);
}

void OpenGLWidget::drawLine(const QVector2D &a, const QVector2D &b)
{
    glBegin(GL_LINES);
        glVertex2f(a.x(), a.y());
        glVertex2f(b.x(), b.y());
    glEnd();
}

void OpenGLWidget::drawPolygon(const QVector2D &a, const QVector2D &b, const QVector2D &c, const QVector2D &d)
{
    glBegin(GL_POLYGON);
        glVertex2f(a.x(), a.y());
        glVertex2f(b.x(), b.y());
        glVertex2f(c.x(), c.y());
        glVertex2f(d.x(), d.y());
    glEnd();
}

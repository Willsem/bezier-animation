#ifndef __OPENGLWIDGET_H
#define __OPENGLWIDGET_H

#define GL_SILENCE_DEPRECATION

#include <QtOpenGL>
#include <QOpenGLWidget>
#include "Commands/Draw.h"

class Facade;

class OpenGLWidget : public QOpenGLWidget
{
    Q_OBJECT

protected:
    void initializeGL();
    void resizeGL(int newWidth, int newHeight);
    void paintGL();

public:
    OpenGLWidget(QWidget *parent = nullptr);
    void setFacade(Facade *facade);
    void setLineWidth(const float w);
    void drawLine(const QVector2D &a, const QVector2D &b);

private:
    Facade *_facade;
};

#endif // __OPENGLWIDGET_H

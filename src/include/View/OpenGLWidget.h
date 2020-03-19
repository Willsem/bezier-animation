#ifndef __OPENGLWIDGET_H
#define __OPENGLWIDGET_H

#define GL_SILENCE_DEPRECATION

#include <QtOpenGL>
#include <QOpenGLWidget>
#include "Commands/Draw.h"

class OpenGLWidget : public QOpenGLWidget
{
    Q_OBJECT

protected:
    void initializeGL();
    void resizeGL(int newWidth, int newHeight);
    void paintGL();

public:
    OpenGLWidget(QWidget *parent = nullptr);
};

#endif // __OPENGLWIDGET_H

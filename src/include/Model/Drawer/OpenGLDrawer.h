#ifndef __OPENGLDRAWER_H
#define __OPENGLDRAWER_H

#include "View/OpenGLWidget.h"
#include "Drawer.h"

class OpenGLWidget;

class OpenGLDrawer : public Drawer
{
public:
    OpenGLDrawer(OpenGLWidget &widget);
    void drawLine(const QVector2D &a, const QVector2D &b) override;

private:
    OpenGLWidget &_widget;
};

#endif // __OPENGLDRAWER_H

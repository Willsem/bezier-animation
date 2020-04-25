#ifndef __OPENGLDRAWER_H
#define __OPENGLDRAWER_H

#include "View/OpenGLWidget.h"
#include "Drawer.h"

class OpenGLWidget;

class OpenGLDrawer : public Drawer
{
public:
    OpenGLDrawer(OpenGLWidget &widget);
    void drawPolygon(const QVector3D &a, const QVector3D &b) override;

private:
    OpenGLWidget &_widget;
};

#endif // __OPENGLDRAWER_H

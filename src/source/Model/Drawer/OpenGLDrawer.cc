#include "Model/Drawer/OpenGLDrawer.h"

OpenGLDrawer::OpenGLDrawer(OpenGLWidget &widget)
    : Drawer(), _widget(widget) { }

void OpenGLDrawer::drawLine(const QVector2D &a, const QVector2D &b)
{
    _widget.drawLine(a, b);
}

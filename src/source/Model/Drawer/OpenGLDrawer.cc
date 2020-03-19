#include "Model/Drawer/OpenGLDrawer.h"

OpenGLDrawer::OpenGLDrawer(QOpenGLFunctions &functions)
    : Drawer(), _functions(functions) { }

void OpenGLDrawer::drawLine(QVector2D a, QVector2D b)
{
}

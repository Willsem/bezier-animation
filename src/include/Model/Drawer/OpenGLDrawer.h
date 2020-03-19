#ifndef __OPENGLDRAWER_H
#define __OPENGLDRAWER_H

#include <QOpenGLFunctions>
#include "Drawer.h"

class OpenGLDrawer : public Drawer
{
public:
    OpenGLDrawer(QOpenGLFunctions &functions);
    void drawLine(QVector2D a, QVector2D b) override;

private:
    QOpenGLFunctions &_functions;
};

#endif // __OPENGLDRAWER_H

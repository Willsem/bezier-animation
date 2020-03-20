#ifndef __DRAW_H
#define __DRAW_H

#include <QOpenGLFunctions>
#include "Model/Drawer/OpenGLDrawer.h"
#include "Command.h"

class OpenGLWidget;

class Draw : public Command
{
public:
    Draw(OpenGLWidget &widget);
    void execute(Facade &facade) override;

private:
    OpenGLWidget &_widget;
};

#endif // __DRAW_H

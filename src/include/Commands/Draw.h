#ifndef __DRAW_H
#define __DRAW_H

#include <QOpenGLFunctions>
#include "Command.h"

class Draw : public Command
{
public:
    Draw(QOpenGLFunctions &functions);
    void execute(Facade &facade) override;

private:
    QOpenGLFunctions &_functions;
};

#endif // __DRAW_H

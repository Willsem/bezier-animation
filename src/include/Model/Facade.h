#ifndef __FACADE_H
#define __FACADE_H

#include "Model/Managers/DrawManager.h"
#include "Model/Managers/MoveManager.h"
#include <QVector2D>

class Facade
{
public:
    Facade();
    ~Facade() { }

    DrawManager getDrawManager() { return drawManager; }
    MoveManager getMoveManager() { return moveManager; }
    CurveBezier LeftBrow;
    CurveBezier RightBrow;

private:
    DrawManager drawManager;
    MoveManager moveManager;
};

#endif // __FACADE_H

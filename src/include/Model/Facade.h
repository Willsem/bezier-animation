#ifndef __FACADE_H
#define __FACADE_H

#include "Model/Managers/DrawManager.h"
#include "Model/Managers/MoveManager.h"

class Facade
{
    Facade();
    ~Facade();

    DrawManager getDrawManager() { return drawManager; }
    MoveManager getMoveManager() { return moveManager; }

private:
    DrawManager drawManager;
    MoveManager moveManager;
};

#endif // __FACADE_H

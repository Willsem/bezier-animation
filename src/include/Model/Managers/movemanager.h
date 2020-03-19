#ifndef MOVEMANAGER_H
#define MOVEMANAGER_H

#include "Manager.h"
#include "Model/brownstages.h"
#include "Model/model.h"

class MoveManager : public Manager
{
public:
    MoveManager();
    void MoveBrown(BrownStages stage, CurveBezier &brown);
};

#endif // MOVEMANAGER_H

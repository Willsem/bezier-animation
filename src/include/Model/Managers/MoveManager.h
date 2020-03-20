#ifndef MOVEMANAGER_H
#define MOVEMANAGER_H

#include "Manager.h"
#include "Model/BrownStages.h"
#include "Model/Model.h"
#include <QVector2D>

class MoveManager : public Manager
{
public:
    MoveManager();
    void MoveBrown(BrownStages stage, CurveBezier &brown, int time);
};

#endif // MOVEMANAGER_H

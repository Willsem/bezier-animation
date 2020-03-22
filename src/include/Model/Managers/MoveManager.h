#ifndef MOVEMANAGER_H
#define MOVEMANAGER_H

#include "Manager.h"
#include "Model/BrownStages.h"
#include "Model/Model.h"
#include <QVector2D>
#include <QVector>

class MoveManager : public Manager
{
public:
    MoveManager();
    void MoveBrown(BrownStages oldstage, BrownStages newstage, CurveBezier &brown, int curtime, int time);
};

#endif // MOVEMANAGER_H

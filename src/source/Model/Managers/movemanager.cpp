#include "Model/Managers/movemanager.h"

void MoveManager::MoveBrown(BrownStages stage, CurveBezier &brown)
{
    switch (stage)
    {
    case UP:
        brown.setP1(0,0);
        brown.setP2(0,0);
        break;
    case DOWN:
        brown.setP1(0,0);
        brown.setP2(0,0);
        break;
    case NORMAL:
        brown.setP1(0,0);
        brown.setP2(0,0);
        break;
    }
}

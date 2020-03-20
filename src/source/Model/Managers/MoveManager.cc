#include "Model/Managers/MoveManager.h"

MoveManager::MoveManager() { }

void MoveManager::MoveBrown(BrownStages stage, CurveBezier &brown, int time)
{
    QVector2D p1, p2, p3;
    switch (stage)
    {
    case UPLEFT:
        p1 = QVector2D(0, 100);
        p2 = QVector2D(40, 100);
        p3 = QVector2D(80, 120);
        break;
    case UPRIGHT:
        p1 = QVector2D(100, 120);
        p2 = QVector2D(40, 90);
        p3 = QVector2D(180, 100);
        break;
    case NORMALLEFT:
        p1 = QVector2D(0, 100);
        p2 = QVector2D(40, 50);
        p3 = QVector2D(80, 100);
        break;
    case NORMALRIGHT:
        p1 = QVector2D(100, 100);
        p2 = QVector2D(40, 50);
        p3 = QVector2D(180, 100);
        break;
    case DOWNLEFT:
        p1 = QVector2D(0, 100);
        p2 = QVector2D(40, 20);
        p3 = QVector2D(80, 100);
        break;
    case DOWNRIGHT:
        p1 = QVector2D(100, 100);
        p2 = QVector2D(40, 20);
        p3 = QVector2D(180, 100);
        break;
    }
}

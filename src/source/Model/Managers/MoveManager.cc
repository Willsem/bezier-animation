#include "Model/Managers/MoveManager.h"

MoveManager::MoveManager() { }

QVector<QVector2D> convertStage(BrownStages stage)
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

    QVector<QVector2D> vec;
    vec << p1 << p2 << p3;

    return vec;
}

void MoveManager::MoveBrown(BrownStages oldstage, BrownStages newstage, CurveBezier &brown, int curtime, int time)
{
    QVector<QVector2D> vecold = convertStage(oldstage);
    QVector<QVector2D> vecnew = convertStage(newstage);

    float x, y;
    x = (vecnew[0].x() - vecold[0].x()) / time * curtime;
    y = (vecnew[0].y() - vecold[0].y()) / time * curtime;
    brown.setP1(x, y);

    x = (vecnew[1].x() - vecold[1].x()) / time * curtime;
    y = (vecnew[1].y() - vecold[1].y()) / time * curtime;
    brown.setP2(x, y);

    x = (vecnew[2].x() - vecold[2].x()) / time * curtime;
    y = (vecnew[2].y() - vecold[2].y()) / time * curtime;
    brown.setP3(x, y);
}

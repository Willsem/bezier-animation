#ifndef MODEL_H
#define MODEL_H

#include <QVector2D>
#include <QList>
#include <math.h>

class CurveBezier
{
public:
    CurveBezier(QVector2D p1, QVector2D p2, QVector2D p3);

    QList<QVector2D> BezierList();
    QVector2D NewCoordinat(float t);

private:
    QVector2D p1;
    QVector2D p2;
    QVector2D p3;

    float step = 0.01;
};

#endif // MODEL_H

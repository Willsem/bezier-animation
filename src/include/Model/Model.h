#ifndef MODEL_H
#define MODEL_H

#include <QVector2D>
#include <QVector>
#include <math.h>

class CurveBezier
{
public:
    CurveBezier() {}
    CurveBezier(QVector2D p1, QVector2D p2, QVector2D p3);

    QVector<QVector2D> BezierList();
    QVector2D NewCoordinat(float t);
    void setP1(float x, float y);
    void setP2(float x, float y);
    void setP3(float x, float y);

private:
    QVector2D p1;
    QVector2D p2;
    QVector2D p3;

    float step = 0.01;
};

#endif // MODEL_H

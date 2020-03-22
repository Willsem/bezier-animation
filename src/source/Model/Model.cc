#include "Model/Model.h"

CurveBezier::CurveBezier(QVector2D p1, QVector2D p2, QVector2D p3)
{
    this->p1 = p1;
    this->p2 = p2;
    this->p3 = p3;
}

QVector<QVector2D> CurveBezier::BezierList()
{
    QVector<QVector2D> vec;
    float t = 0;
    while (t < 1)
    {
        vec << NewCoordinat(t);
        t += step;
    }

    return vec;
}

QVector2D CurveBezier::NewCoordinat(float t)
{
    float x = (1 - t * t) * p1.x() + 2 * (1 - t) * t * p2.x() + t * t * p3.x();
    float y = (1 - t * t) * p1.y() + 2 * (1 - t) * t * p2.y() + t * t * p3.y();

    return QVector2D(x, y);
}

void CurveBezier::setP1(float x, float y)
{
    p1.setX(x);
    p1.setY(y);
}

void CurveBezier::setP2(float x, float y)
{
    p2.setX(x);
    p2.setY(y);
}

void CurveBezier::setP3(float x, float y)
{
    p3.setX(x);
    p3.setY(y);
}

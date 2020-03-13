#include "Model/model.h"

CurveBezier::CurveBezier(QVector2D p1, QVector2D p2, QVector2D p3)
{
    p1 = this->p1;
    p2 = this->p2;
    p3 = this->p3;
}

QList<QVector2D> CurveBezier::BezierList()
{
    QList<QVector2D> vec;
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

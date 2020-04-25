#ifndef __DRAWER_H
#define __DRAWER_H

#include <QVector2D>

class Drawer
{
public:
    Drawer() { }
    virtual void drawLine(const QVector3D &a, const QVector3D &b) = 0;
};

#endif // __DRAWER_H

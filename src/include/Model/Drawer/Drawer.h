#ifndef __DRAWER_H
#define __DRAWER_H

#include <QVector2D>

class Drawer
{
public:
    Drawer() { }
    virtual void drawLine(const QVector2D &a, const QVector2D &b) = 0;
};

#endif // __DRAWER_H

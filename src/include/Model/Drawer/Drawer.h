#ifndef __DRAWER_H
#define __DRAWER_H

#include <QVector2D>

class Drawer
{
public:
    Drawer() { }
    virtual void drawLine(QVector2D a, QVector2D b) = 0;
};

#endif // __DRAWER_H

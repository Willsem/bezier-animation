#ifndef __DRAWMANAGER_H
#define __DRAWMANAGER_H

#include <QVector>
#include <QVector2D>
#include "Manager.h"
#include "Model/Drawer/Drawer.h"

class DrawManager : public Manager
{
public:
    DrawManager();
    void drawBezier(QVector<QVector2D> &points, Drawer &drawer);
};

#endif // __DRAWMANAGER_H

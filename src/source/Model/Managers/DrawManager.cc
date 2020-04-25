#include "Model/Managers/DrawManager.h"

DrawManager::DrawManager()
    : Manager() { }

void DrawManager::drawBezier(const QVector<QVector3D> &points, Drawer &drawer)
{
    for (int i = 0 ; i < points.size() - 1; ++i) {
        drawer.drawPolygon(points[i], points[i + 1]);
    }
}

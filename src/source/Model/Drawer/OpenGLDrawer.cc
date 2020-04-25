#include "Model/Drawer/OpenGLDrawer.h"

OpenGLDrawer::OpenGLDrawer(OpenGLWidget &widget)
    : Drawer(), _widget(widget) { }

void OpenGLDrawer::drawLine(const QVector3D &a, const QVector3D &b)
{
    // Convert to coordinates from 0 to 200
    QVector2D newa = QVector2D((a.x() - 100) / 100.0, (a.y() - 100) / 100.0);
    QVector2D newb = QVector2D((b.x() - 100) / 100.0, (b.y() - 100) / 100.0);

    QVector2D newaw = QVector2D((a.x() - 100) / 100.0, (a.y() - 100 + a.z()) / 100.0 );
    QVector2D newbw = QVector2D((b.x() - 100) / 100.0, (b.y() - 100 + b.z()) / 100.0 );

    _widget.drawLine(newa, newb);
    _widget.drawLine(newaw, newbw);
    _widget.drawLine(newa, newaw);
    _widget.drawLine(newb, newbw);
}

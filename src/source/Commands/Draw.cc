#include "Commands/Draw.h"

Draw::Draw(OpenGLWidget &widget)
    : _widget(widget) { }

void Draw::execute(Facade &facade)
{
    OpenGLDrawer drawer(_widget);

    facade.LeftBrow.setP1(0, 100);
    facade.LeftBrow.setP2(40, 50);
    facade.LeftBrow.setP3(80, 100);

    facade.RightBrow.setP1(100, 100);
    facade.RightBrow.setP2(140, 50);
    facade.RightBrow.setP3(180, 100);

    facade.getDrawManager().drawBezier(facade.RightBrow.BezierList(), drawer);
    facade.getDrawManager().drawBezier(facade.LeftBrow.BezierList(), drawer);
}

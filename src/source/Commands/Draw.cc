#include "Commands/Draw.h"

Draw::Draw(OpenGLWidget &widget)
    : _widget(widget) { }

void Draw::execute(Facade &facade)
{
    OpenGLDrawer drawer(_widget);

    facade.LeftBrow.setP1(10, 100);
    facade.LeftBrow.setP2(60, 50);
    facade.LeftBrow.setP3(110, 100);

    facade.RightBrow.setP1(130, 100);
    facade.RightBrow.setP2(180, 50);
    facade.RightBrow.setP3(230, 100);

    facade.getDrawManager().drawBezier(facade.RightBrow.BezierList(), drawer);
    facade.getDrawManager().drawBezier(facade.LeftBrow.BezierList(), drawer);
}

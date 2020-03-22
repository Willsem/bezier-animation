#include "Commands/Draw.h"

Draw::Draw(OpenGLWidget &widget)
    : _widget(widget) { }

void Draw::execute(Facade &facade)
{
    OpenGLDrawer drawer(_widget);
    facade.getDrawManager().drawBezier(facade.RightBrow.BezierList(), drawer);
    facade.getDrawManager().drawBezier(facade.LeftBrow.BezierList(), drawer);
}

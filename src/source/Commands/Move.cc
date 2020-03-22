#include "Commands/Move.h"
#include <QDebug>

Move::Move(BrownStages leftStart, BrownStages leftEnd,
           BrownStages rightStart, BrownStages rightEnd,
           size_t animationTime)
    : _leftStart(leftStart), _leftEnd(leftEnd),
      _rightStart(rightStart), _rightEnd(rightEnd),
      _animationTime(animationTime)
{
    _currentTime = 0;
}

void Move::execute(Facade &facade)
{
    if (!isEnd()) {
        MoveManager manager = facade.getMoveManager();
        manager.MoveBrown(_leftStart, _leftEnd, facade.LeftBrow, _currentTime, _animationTime);
        manager.MoveBrown(_rightStart, _rightEnd, facade.RightBrow, _currentTime, _animationTime);
        _currentTime += 20;
    }
}

bool Move::isEnd()
{
    return _currentTime >= _animationTime;
}

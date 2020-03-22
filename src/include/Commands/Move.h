#ifndef __MOVE_H
#define __MOVE_H

#include "Command.h"
#include "Model/BrownStages.h"

class Move : public Command
{
public:
    Move() { }
    Move(BrownStages leftStart, BrownStages leftEnd,
         BrownStages rightStart, BrownStages rightEnd,
         size_t animationTime
    );
    void execute(Facade &facade) override;
    bool isEnd();

private:
    BrownStages _leftStart;
    BrownStages _leftEnd;
    BrownStages _rightStart;
    BrownStages _rightEnd;
    size_t _animationTime;
    size_t _currentTime;
};

#endif // __MOVE_H

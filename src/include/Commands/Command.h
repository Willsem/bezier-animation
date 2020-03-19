#ifndef __COMMAND_H
#define __COMMAND_H

#include "Model/Facade.h"

class Command
{
public:
    virtual void execute(Facade &facade) = 0;
    virtual ~Command() = default;

protected:
    Command() { }
};

#endif // __COMMAND_H

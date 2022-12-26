#pragma once
#include "Command.h"

class MoveCommand :
    public Command
{
public:
    /** Constructor/Destructor **/
    MoveCommand();
    ~MoveCommand() override;

    /** Override **/
    virtual void Execute(class AActor* actor) override;
};


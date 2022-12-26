#include "MoveCommand.h"
#include <iostream>

#include <AActor/AActor.h>

MoveCommand::MoveCommand()
{
}

MoveCommand::~MoveCommand()
{
}

void MoveCommand::Execute(AActor* actor)
{
	std::cout << actor->GetName() << " Move!\n";
}

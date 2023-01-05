#include "Controller.h"

#include <Command/Command.h>
#include <AActor/AActor.h>

Controller::Controller(AActor* actor)
{
	owner = actor ? actor : nullptr;
	command_idx = 0;
}

Controller::~Controller()
{
	if (owner)
	{
		delete owner;
		owner = nullptr;
	}

	for (auto& command : commands)
	{
		if (command)
		{
			delete command;
			command = nullptr;
		}
	}
	commands.clear();
	commands.shrink_to_fit();
}

AActor* Controller::GetOwner() const
{
	return owner;
}

void Controller::SetOwner(AActor* actor)
{
	owner = actor ? actor : nullptr;
}

void Controller::ExecuteCommand(Command* command)
{
}

void Controller::UndoCommand()
{
}

void Controller::RedoCommand()
{
}
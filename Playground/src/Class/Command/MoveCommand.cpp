#include "MoveCommand.h"
#include <iostream>

#include <AActor/AActor.h>

MoveCommand::MoveCommand(EDirection direction)
	: direction(direction)
{
}

void MoveCommand::Execute(AActor* actor)
{
	if (!actor)
	{
		return;
	}

	FVector location = actor->GetActorLocation();
	switch (direction)
	{
	case EDirection::Up:
		location.y++;
		break;
	case EDirection::Down:
		location.y--;
		break;
	case EDirection::Left:
		location.x--;
		break;
	case EDirection::Right:
		location.x++;
		break;
	default:
		break;
	}
	actor->SetActorLocation(location);
}

void MoveCommand::Undo(AActor* actor)
{
}

void MoveCommand::Redo(AActor* actor)
{
}
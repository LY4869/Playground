#include <Core.h>
#include <Command/Command.h>
#include <Command/MoveCommand.h>
#include <AActor/AActor.h>
#include <Controller/Controller.h>

int main()
{
	AActor* const actor = new AActor("billy");
	if (Controller* const controller = actor->GetController())
	{
		controller->ExecuteCommand(new MoveCommand(EDirection::Right));
		log(actor->GetActorLocation());

		controller->ExecuteCommand(new MoveCommand(EDirection::Right));
		log(actor->GetActorLocation());
	}
	return 0;
}
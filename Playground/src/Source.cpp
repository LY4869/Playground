#include <bits/bits-stdc++.h>
#include <FVector/FVector.h>
#include <Command/Command.h>
#include <Command/MoveCommand.h>
#include <AActor/AActor.h>

int main()
{

	AActor* actor = new AActor("billy", FVector(1, 2));
	Command* command = new MoveCommand();
	
	command->Execute(actor);

	return 0;
}
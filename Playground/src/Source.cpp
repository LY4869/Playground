#include <Core.h>
#include <Command/Command.h>
#include <Command/MoveCommand.h>
#include <AActor/AActor.h>
#include <Controller/Controller.h>
#include <Observer/Observer.h>
#include <Observer/Achievement.h>
#include <User/User.h>

int main()
{
	User* user = new User();
	user->account = "leee";
	user->password = "123";

	user->characters.push_back(new AActor("billy"));
	if (AActor* actor = user->characters.back())
	{
		Achievement achievement;
		achievement.OnNotify(actor, Event::FirstStart);
	}

	return 0;
}
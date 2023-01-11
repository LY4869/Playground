#include <Core.h>
#include <Command/Command.h>
#include <Command/MoveCommand.h>
#include <AActor/AActor.h>
#include <Controller/Controller.h>
#include <Observer/Observer.h>
#include <Observer/Achievement.h>
#include <User/User.h>
#include <Singleton/Singleton.h>
#include <FString/FString.h>
#include <Entity/Entity.h>

static constexpr int n = 5;

int main()
{
	std::vector<FString> strings;
	strings.reserve(n);

	for (int i = 0; i < n; i++)
		strings.emplace_back("ABC");

	std::cin.get();
	return 0;
}
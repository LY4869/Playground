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
	TArray<int> nums(n);
	for (int i = 0; i < n; i++)
		nums[i] = i;
	for (const auto& ele : nums.Get())
		log(ele);

	log("Press enter to continue...");
	std::cin.get();
	return 0;
}
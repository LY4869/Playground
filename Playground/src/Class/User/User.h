#pragma once

#include <Core.h>
#include <Observer/Achievement.h>

class User
{
public:
	User() = default;
	~User() = default;

	std::string account;
	std::string password;

	std::vector<Achievement> achievements;
	std::vector<class AActor*> characters;
};

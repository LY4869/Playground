#pragma once

#include <Core.h>

class Singleton
{
	Singleton() = default;
public:
	static Singleton& GetInstance()
	{
		static Singleton instance;
		return instance;
	}

	static void Print(const std::string& message)
	{
		log(message);
	}
};

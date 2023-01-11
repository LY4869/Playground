#pragma once

#include <Core.h>

struct Entity
{
	FString m_Name;

	Entity(const FString& string) : m_Name(string) {}
	Entity(FString&& string) : m_Name(std::move(string)) {}
};
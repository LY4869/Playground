#pragma once

#include <Core.h>

class FString
{
	size_t m_Size;
	char* m_Data;

public:
	FString() = default;
	FString(const char* string)
	{
		m_Size = strlen(string);
		m_Data = new char[m_Size];
		memcpy(m_Data, string, m_Size);
	}
	FString(const FString& string)
	{
		log("Copied");
		m_Size = string.m_Size;
		m_Data = new char[m_Size];
		memcpy(m_Data, string.m_Data, m_Size);
	}
	FString(FString&& string) noexcept
	{
		log("Moved");
		m_Size = string.m_Size;
		m_Data = string.m_Data;

		string.m_Size = 0;
		string.m_Data = nullptr;
	}

	~FString()
	{
		log("Destroyed");
		delete m_Data;
	}

	friend std::ostream& operator << (std::ostream& os, const FString& str)
	{
		for (size_t i = 0; i < str.m_Size; i++)
		{
			os << str.m_Data[i];
		}
		return os;
	}
};

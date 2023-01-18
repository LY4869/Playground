#include "Extern.h"

#include <iostream>

void ExternFunc1();
void ExternFunc2()
{
	ExternFunc1();
	g_var1++;
	std::cout << g_var1 << std::endl;
}
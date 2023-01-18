#include "Extern.h"

int g_var1;
float g_var2;
bool g_var3;

void ExternFunc1()
{
	g_var1 = 5;
	g_var2 = 5.f;
	g_var3 = true;
}
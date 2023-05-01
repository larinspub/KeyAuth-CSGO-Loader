#include "Login.h"

int main()
{
	SetConsoleTitleA(XorStr("csgo loader").c_str());
	Delete();
	ConnectingStatus();
	Login();
	Sleep(-1);
}

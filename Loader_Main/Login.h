#include "../api/KeyAuth.hpp"
#include "Main.h"
#include <iostream>
#include <tlhelp32.h>
#include <fstream>
#include <filesystem>
#include "xorstr.hpp"
using namespace KeyAuth;

std::string name = "keyauth name";
std::string ownerid = "keyauth ownerid";
std::string secret = "keyauth secret"; 
std::string version = "keyauth version";
api KeyAuthApp(name, ownerid, secret, version);

void Delete()
{
	DeleteFile("C:\\ProgramData\\csgo.dll");
}

void Login()
{
	SetConsoleOutputCP(1254);
	Delete();
	std::string key;
	std::cout << XorStr("\n");
	std::cout << XorStr("   Key?: ");
	std::cin >> key;
	KeyAuthApp.license(key);
	Loader();
}

void ConnectingStatus()
{
	Delete();
	SetConsoleOutputCP(1254);
	std::cout << XorStr("\n\n Connecting Server..");
	KeyAuthApp.init();
	system(XorStr("cls").c_str());
	system(XorStr("color d").c_str());
}
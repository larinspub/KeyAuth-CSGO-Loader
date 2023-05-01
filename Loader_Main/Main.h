#pragma once
#include "Injector.h"
#include <fstream>

#pragma comment(lib, "urlmon.lib")


bool pencere()
{
    LPCTSTR WindowName = "Counter-Strike: Global Offensive - Direct3D 9";
    HWND Find = FindWindow(NULL, WindowName);
    return (Find != NULL);
}

void Loader()
{
    system(XorStr("cls").c_str());
    std::cout << XorStr("\n");
    SetConsoleOutputCP(1254);
    DeleteFile("C:\\ProgramData\\csgo.dll");
    Sleep(2000);
    system(XorStr("cls").c_str());
    system(XorStr("color 5").c_str());
    std::cout << XorStr("\n");
    std::cout << XorStr("   start csgo\n");

    while (!pencere())
    {
        Sleep(37000);
    }

    std::ifstream ifile("C:\\ProgramData\\csgo.dll");
    if (ifile)
    {
        Beep(700, 500);
        InjectDLL();
    }
    else
    {
        HRESULT hr = URLDownloadToFile(NULL, _T("your download link"), _T("C:\\ProgramData\\csgo.dll"), 0, NULL);
        Beep(700, 500);
        InjectDLL();
    }

}

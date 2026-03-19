#include <iostream>
#include <windows.h>
using namespace std;
void logmenu();
int entry1;
int main()
{
	//لدعم الرموز
	system("chcp 65001 > nul");
	// ضبط الـ Console لدعم UTF-8
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	// تغيير خط الـ Console لدعم الرموز
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_FONT_INFOEX fontInfo;
	fontInfo.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	GetCurrentConsoleFontEx(hConsole, false, &fontInfo);
	wcscpy_s(fontInfo.FaceName, L"Consolas");
	SetCurrentConsoleFontEx(hConsole, false, &fontInfo);

	//The code
	logmenu();
	switch (entry1)
	{
	case 1:

	case 2:

	case 3:

	default:

	}
}
void logmenu()
{
	cout << "╔════════════════════════════════════════════════════╗\n";
	cout << "║        ♥️ Welcome to Digital Mood Tracker ♥️       ║   \n";
	cout << "╠════════════════════════════════════════════════════╣\n";
	cout << "║                                                    ║\n";
	cout << "║ Are you new user?👋                                ║\n";
	cout << "║ [1] Log in🔑                                       ║\n";
	cout << "║ [2] Sign up📝                                      ║ \n";
	cout << "║ [3] Exit❎                                         ║\n";
	cout << "║                                                    ║\n";
	cout << "╚════════════════════════════════════════════════════╝\n";
	cout << " Your entery: ";
	cin >> entry1;
}
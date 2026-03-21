#include <iostream>
#include <windows.h>
using namespace std;
//defining the structures
const int max_users = 10;
struct UserAccount
{
	int id;
	char username[50];
	char password[50];
};
//Arrays declarations
UserAccount users[max_users];
//function declarations
void logmenu();
int entry1;
void login();
void signup();
//main function
int main()
{
	//لدعم الرموز والإطارات
	system("chcp 65001 > nul");
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
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
//Ending of main function
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
	cout << " Your entry: ";
	cin >> entry1;
}
void login()
{
	cout << "╔═════════════════════════════════════╗\n";
	cout << "║              Log in🔑               ║\n";
	cout << "╠═════════════════════════════════════╣\n";
	cout << "║ 👤User name: ";
	cout << "║ 🔒Password: ";
	cout << "";
}
void signup()
{
	cout << "╔═════════════════════════════════════╗\n";
	cout << "║              Sign up📝              ║\n";
	cout << "╠═════════════════════════════════════╣\n";
	cout << "║ 🆔ID: ";
	cout << "║ 🪪User name: ";
	cout << "║ 🔒Password: ";
	cout << "";
}
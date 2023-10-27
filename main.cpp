#include <Windows.h>
#include "auth.hpp"
#include <string>
#include "skStr.h"
#include "util.h"
#include <filesystem>
#include <fstream>
#include <chrono>
#include <tchar.h>
#include <logo.h>
#include <include/xor.hpp>
#pragma comment(lib, "urlmon.lib")


void mainmenu()
{
	Util::SetColor(11);
	std::cout << skCrypt("\n\n << Created by qxzxf");
	Util::SetColor(15);

	std::cout << skCrypt("\n\n 1. Open Everything");

	std::cout << skCrypt("\n\n 2. Open LastActivityView");

	std::cout << skCrypt("\n\n 3. Open Process Hacker");

	std::cout << skCrypt("\n\n 4. Open ShellBag Analyzer");

	std::cout << skCrypt("\n\n 5. Open USBDeview  ");

	std::cout << skCrypt("\n\n 6. Open Prefetch");

	std::cout << skCrypt("\n\n 7. Open Recent");

	std::cout << skCrypt("\n\n 8. Open AppData");

	std::cout << skCrypt("\n\n 9. Open Temp");

	std::cout << skCrypt("\n\n 10. Open %temp%");

	std::cout << skCrypt("\n\n 11. Open %appdata%\n \n\n > ");
		
	int option1;
	std::cin >> option1;
	switch (option1)

	{
	case 1:
	{
		system(xorstr_("start C:/Windows/qxzxf/")); /*ѕуть к файлу*/
		system("cls");
		mainmenu();
		break;
	}

	case 2:
	{
		system(xorstr_("start C:/Windows/qxzxf/")); /*ѕуть к файлу*/
		system("cls");
		mainmenu();
		break;
	}
	case 3:
	{
		system(xorstr_("start C:/Windows/qxzxf/")); /*ѕуть к файлу*/
		system("cls");
		mainmenu();
		break;
	}
	case 4:
	{
		system(xorstr_("start C:/Windows/qxzxf/")); /*ѕуть к файлу*/
		system("cls");
		mainmenu();
		break;
	}
	case 5:
	{
		system(xorstr_("start C:/Windows/qxzxf/")); /*ѕуть к файлу*/
		system("cls");
		mainmenu();
		break;
	}
	case 6:
	{
		system(xorstr_("start prefetch"));
		system("cls");
		mainmenu();
		break;
	}
	case 7:
	{
		system(xorstr_("start recent"));
		system("cls");
		mainmenu();
		break;
	}
	case 8:
	{
		system(xorstr_("start appdata"));
		system("cls");
		mainmenu();
		break;
	}
	case 9:
	{
		system(xorstr_("start temp"));
		system("cls");
		mainmenu();
		break;
	}
	case 10:
	{
		system(xorstr_("start %temp%"));
		system("cls");
		mainmenu();
		break;
	}
	case 11:
	{
		system(xorstr_("start %appdata%"));
		system("cls");
		mainmenu();
		break;
	}

	default:
	{
		std::cout << skCrypt("\n\n << Choose Correct Option!");
		Sleep(1000);
		system("cls");
		mainmenu();
		break;
	}
	}
  
}


	





int main()
{

	SetConsoleTitleA(skCrypt("Checker by qxzxf"));
	Util::SetColor(15);
	std::cout << skCrypt("\n\n [~] Connecting to server...");
	Sleep(2500);
	system("cls");
	std::cout << skCrypt("\n\n [~] Updating...");
	std::filesystem::path g{ "C:\\Windows\\qxzxf" }; /* ѕуть где будет создана папка */
	if (!std::filesystem::exists(g))
	{
		std::filesystem::create_directory(g);
	}
	std::string dwnld_URL = "http://"; /*—сылка на хост*/
	std::string savepath = (xorstr_("C:\\")); /* ѕатч загрузки */

	std::string dwnld_URL1 = "http://"; /* —сылка на хост */
	std::string savepath1 = (xorstr_("C:\\")); /* ѕатч загрузки 1 */

	std::string dwnld_URL2 = "http://"; /*—сылка на хост*/ 
	std::string savepath2 = (xorstr_("C:\\")); /*ѕатч загрузки 2 */

	std::string dwnld_URL3 = "http://"; /*—сылка на хост*/ 
	std::string savepath3 = (xorstr_("C:\\")); /*ѕатч загрузки 3 */

	std::string dwnld_URL4 = "http://"; /*—сылка на хост*/ 
	std::string savepath4= (xorstr_("C:\\")); /*ѕатч загрузки 4 */

	std::string dwnld_URL5 = "http://"; /*—сылка на хост*/ 
	std::string savepath5 = (xorstr_("C:\\")); /*ѕатч загрузки 5 */

	URLDownloadToFile(NULL, dwnld_URL.c_str(), savepath.c_str(), 0, NULL);
	URLDownloadToFile(NULL, dwnld_URL1.c_str(), savepath1.c_str(), 0, NULL);
	URLDownloadToFile(NULL, dwnld_URL2.c_str(), savepath2.c_str(), 0, NULL);
	URLDownloadToFile(NULL, dwnld_URL3.c_str(), savepath3.c_str(), 0, NULL);
	URLDownloadToFile(NULL, dwnld_URL4.c_str(), savepath4.c_str(), 0, NULL);
	URLDownloadToFile(NULL, dwnld_URL5.c_str(), savepath5.c_str(), 0, NULL);
	std::filesystem::path f{ "C:\\Windows\\qxzxf\\" }; /*ѕуть к файлу дл€ проверки*/
	Sleep(7000);
	if (!std::filesystem::exists(f))
	{
		system("cls");
		Util::SetColor(15);
		std::cout << skCrypt("\n\n [~] Error while updating");
		Sleep(2500);
		exit(0);
	}
	system(xorstr_("start C:/Windows/qxzxf/")); /* ѕуть к файлу который будет открыт при коннекту к серверу */
	Sleep(2500);
	system("cls");
	mainmenu();
}

/*јндрей не надо лазить в моем коде*/
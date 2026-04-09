#include "game.h"

void gameinfo() {
	//clear screem
	for (int i = 0; i < 20; i++) {
		std::cout << "\033[1A";
		std::cout << "\033[2K\r";
	}
	//generate title
	std::vector<std::string> ri = { "go to school\n","wanna coffe?\n","when you found coin give me this\n","go to pray\n" };
	std::random_device rd;
	//w
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(0, ri.size() - 1);
	//
	std::string randomri = ri[dis(gen)];
	std::cout << randomri;
	std::cout << "----\n";
	std::cout << "controll\n";
	std::cout << "\n";
	std::cout << "You can control by choice between numbers\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "--\n";
	std::cout << "information\n";
	std::cout << "credit by rytd-png\n";
	std::cout << " \n";
	std::cout << "version of game: beta 0.1\n";
	std::cout << " \n";
	std::cout << "team developers";
	std::cout << "don't think someyhing wrong on me but for now I dont have team\n";
	std::cout << "\n";
	std::cout << "testers\n";
	std::cout << "\033[32m" << "game open-source" << std::endl;
	std::cout << "https://github.com/rtyd-png/after-cry-game\n" << "\033[0m";
	std::cout << "what is open-source?\n";
	std::cout << "\n";
	std::cout << "------\n";
	std::cout << "social\n";
	std::cout << "github\n";
	std::cout << "https://github.com/rtyd-png\n";
	std::cout << "------\n";

	std::cin.clear();
}


void startgame() {
	//varibles
	int co;
	std::string na;

	//game
	std::cout << "welcome in game after cry\n";
	delaysec(1);
	std::cout << "enter your name\n";
	std::cin >> na;
	std::cout << "hi " << na << std::endl;
	std::cout << "warning this game can make files and controll in mouse game horror\n";
	delaysec(3);
	std::cout << "you move in streat\n";
	delaysec(2);
	std::cout << "you go to shop\n";
	delaysec(2);
	std::cout << "you done everything\n";
	delaysec(2);
	std::cout << "you enter your house\n";
	delaysec(2);
	std::cout << "you alive alone\n";
	delaysec(2);
	std::cout << "you want to rest make food?\n";
	delaysec(3);
	std::cout << "1 yes 2 no\n";
	std::cin >> co;
	//champter 2
	if (co == 1) {
		std::cout << "start make food\n";
		delaysec(2);
		std::cout << "you hear something\n";
		delaysec(2);
		std::cout << "but you don't care\n";
		delaysec(2);
		std::cout << "you go to sit and watch tv\n";
		delaysec(2);
		//path
		char* profu = nullptr;
		size_t len = 0;

		#if defined (_WIN32)
			errno_t err = _dupenv_s(&profu, &len, "USERPROFILE");

		#endif
		if (profu != nullptr) {
			std::string path(profu);
			std::ofstream file(path + "\\Descktop\\ead1.txt");
			if (file.is_open()) {
				file << "i watching you";
			}
			std::cout << "done";
		}
		//make file

		std::cout << "tv: warning people there entity black and have clubs and open mouse if you see this entity please calling wps 19936";
		delaysec(2);
		std::cout << "i still watch you";
		delaysec(1);
		std::cout << "\033[2K\r";
		std::cout << "you\n";
		std::this_thread::sleep_for(std::chrono::milliseconds(300));
		std::cout << "you\n";
		std::this_thread::sleep_for(std::chrono::milliseconds(300));
		std::cout << "you\n";
		std::this_thread::sleep_for(std::chrono::milliseconds(300));
		std::cout << "you\n";
		std::this_thread::sleep_for(std::chrono::milliseconds(300));
		//std::cout << "\033[3A\033[J2";

		for (int i = 0; i < 4; i++) {
			std::cout << "\033[1A";
			std::this_thread::sleep_for(std::chrono::milliseconds(300));
			std::cout << "\033[2K";
		}
		std::cout << "loading fix";
		std::this_thread::sleep_for(std::chrono::milliseconds(300));
		std::cout << "\033[2K\r";
		delaysec(1);
		std::cout << "you: what this?\n";
		delaysec(1);
		std::cout << "there something out your house\n";
		delaysec(1);
		std::cout << "you see time night\n";
		std::cin.clear();
		std::cout << "go out?";
		std::cout << "\033[32m" << "1 (yes) " << "\033[31m" << "2 (bo)" << "\033[0m" << std::endl;
		std::cin >> co;
		if (co == 2) {
			std::cout << "your door start breaking\n";
			delaysec(1);
			std::cout << "you should run\n";
			delaysec(1);
			std::cout << "your door has broken\n";
			delaysec(1);
			std::cout << "you now in floor 2\n";
			delaysec(1);
			std::cout << "you scary run to bedroom\n";
			delaysec(1);
			std::cout << "something move out\n";
			delaysec(1);
			for (int i = 0; i < 20; i++) {
				std::cout << "\033[1A";
				std::cout << "\033[2K\r";
			}
			std::cin.clear();
			std::cin >> co;
			std::cout << "do you remeber number wps?\n";
			if (co == 19936) {
				std::cout << "wps: hello how we can help you?\n";
				std::cout << "you: help there monster in my house\n";
				std::cout << "wps: can you say your ip?\n";
				std::cout << "you: (ip)\n";
			}
			else {
				std::cout << "sorry but number out service";
			}

		}

	}
	else if (co == 2) {
		std::cout << "what now should did?";
		delaysec(1);
		std::cout << "1 sleep 2 make food";
	}
}

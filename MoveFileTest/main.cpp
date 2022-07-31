#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <stdlib.h>
#include <filesystem>

void copy();

void menu() {
	bool exitMenu = true;
	std::string inputMenu;

	do {
		std::cout << "Willkommen was möchten Sie tun ?" << std::endl;
		std::cout << "1. Kopieren." << std::endl;
		std::cout << "2. Exit" << std::endl;
		std::getline(std::cin, inputMenu);
		if (inputMenu == "1") {
			exitMenu = false;
			copy();
		}
		else if (inputMenu == "2") {
			std::cout << "Das Programm beendet sich nun." << std::endl;
			exitMenu = false;

		}
	} while (exitMenu == true);
}


void copy() {
	const auto copyOption = std::filesystem::copy_options::skip_existing | std::filesystem::copy_options::recursive;
	std::filesystem::path oldPath = "C:/Users/XxAnu/OneDrive/Desktop/oldFile/";
	std::filesystem::path newPath = "C:/Users/XxAnu/OneDrive/Desktop/newFile/";
	std::filesystem::copy(oldPath, newPath, copyOption);
	
};

int main() {
	
	menu();

	return 0;
}
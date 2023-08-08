#include "GitInclude.h"
#include <iostream>
#include <fstream>
#include <string>

void createRepo(std::string locationR) {

	std::ofstream writebat("status.bat", std::ios::trunc);

	writebat << "@echo off" << "\n";
	writebat << "cd \"" + locationR + "\"" << "\n";
	writebat << "git init" << "\n";

	writebat.close();

	system("status.bat");

}
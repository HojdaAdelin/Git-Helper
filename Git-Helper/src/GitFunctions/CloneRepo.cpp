#include "GitInclude.h"
#include <fstream>
#include <iostream>
#include <Windows.h>
#include <string>

bool cloneRepo(std::string link, std::string location) {

	std::ofstream writebat("status.bat", std::ios::trunc);

	writebat << "@echo off" << "\n";
	writebat << "cd " + location << "\n";
	writebat << "git clone " + link << "\n";
 
	writebat.close();

	int result = system("status.bat");

	if (result == 0) {

		return true;

	}
	else {

		return false;

	}

}
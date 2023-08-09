#include "GitPull.h"
#include <fstream>
#include <iostream>
#include <string>


std::string gitPull(std::string location) {

	std::string output;
	std::string line;
	std::ofstream writebat("status.bat", std::ios::trunc);

	writebat << "@echo off" << "\n";
	writebat << "pushd ." << "\n";
	writebat << "cd \"" + location + "\"" << "\n";
	writebat << "git pull > output.log" << "\n";
	writebat << "popd" << "\n";
	writebat << "move /Y \"" + location + "\\" + "output.log" + "\"" + " ." << "\n";

	writebat.close();

	system("status.bat");

	std::ifstream read("output.log");

	output.clear();

	while (std::getline(read, line)) {

		output += line + "\r\n";

	}

	read.close();

	return output;

}
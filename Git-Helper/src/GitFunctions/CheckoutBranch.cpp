#include "CheckoutBranch.h"
#include <string>
#include <iostream>
#include <fstream>

std::string viewBranch(std::string location) {

	std::string stringOfBranch;

	std::ofstream bat("status.bat", std::ios::trunc);

	bat << "@echo off" << "\n";
	bat << "pushd ." << "\n";
	bat << "cd \"" + location + "\"" << "\n";
	bat << "git branch -a > output.log" << "\n";
	bat << "popd" << "\n";
	bat << "move /Y \"" + location + "\\" + "output.log\" ." << "\n";


	bat.close();

	system("status.bat");

	std::string line;

	std::ifstream read("output.log");

	if (!read) {

		stringOfBranch = "Error while execution!";

	}
	else {

		while (std::getline(read, line)) {

			stringOfBranch += line + "\r\n";

		}

	}

	

	read.close();

	return stringOfBranch;

}

std::string changeBranch(std::string gitLocation, std::string newBranch) {

	std::string returnString;

	std::ofstream write("status.bat", std::ios::trunc);

	write << "@echo off" << "\n";
	write << "pushd ." << "\n";
	write << "cd \"" + gitLocation + "\"" << "\n";
	write << "git checkout " + newBranch + " > output.log" << "\n";
	write << "popd" << "\n";
	write << "move /Y \"" << gitLocation + "\\output.log\" ." << "\n";

	write.close();

	system("status.bat");
	
	std::string line;

	std::ifstream read("output.log");

	while (std::getline(read, line)) {

		returnString += line + "\r\n";

	}

	read.close();
	
	return returnString;

}
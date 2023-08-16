#include "Include.h"
#include "GitFunctions/GitHistory.h"
#include "GitFunctions/GitPull.h"
#include "GitFunctions/CreateRepoForm.h"
#include <fstream>
#include <iostream>
#include <string>

void writeToFile(std::string getLocation) {

	std::ofstream write("dir.txt", std::ios::trunc);

	write << getLocation << "\n";

	write.close();

}

std::string useLocation() {

	std::string location;

	std::ifstream read("dir.txt");

	location.clear();

	read >> location;

	read.close();

	return location;

}
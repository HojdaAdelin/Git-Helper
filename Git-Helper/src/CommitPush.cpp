#include "Include.h"
#include "fstream"
#include <iostream>
#include <string>

std::string commitPushFunction(std::string repoLocation, std::string message) {

	std::ofstream writeCommand("status.bat", std::ios::trunc);
	std::string outPut;

	writeCommand << "@echo off" << "\n";
	writeCommand << "pushd ." << "\n";
	writeCommand << "cd " + repoLocation << "\n";
	writeCommand << "git add ." << "\n";
	writeCommand << "git commit -m \"" + message + "\"" + " > output.log 2>&1" << "\n";
	writeCommand << "git push >> output.log 2>&1" << "\n";
	writeCommand << "popd" << "\n";
	writeCommand << "move /Y " + repoLocation + "\\output.log" << "\n";

	writeCommand.close();

	system("status.bat");

	std::ifstream readLog("output.log");

	outPut.clear();

	std::string line;
	while (std::getline(readLog, line))
	{
		outPut += line + "\n";
	}

	readLog.close();

	return outPut;

}


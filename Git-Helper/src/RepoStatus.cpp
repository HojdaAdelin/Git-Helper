#include "Include.h"
#include "GitFunctions/GitHistory.h"
#include <iostream>
#include <fstream>
#include <string>

std::string ConvertString(String^ str) {

	return marshal_as<std::string>(str);

}

std::string getRepoStatus(std::string repoName) {

	std::string outputFile = repoName + "\\output.log";
	std::string output_text;

	std::ofstream createbat("status.bat", std::ios::trunc);

	createbat << "@echo off" << "\n";
	createbat << "pushd ." << "\n";
	createbat << "cd %1" << "\n";
	createbat << "git status > output.log" << "\n";
	createbat << "popd" << "\n";
	createbat << "move /Y %2 ." << "\n";

	createbat.close();

	std::string command = "status.bat \"" + repoName + "\" " + outputFile;
	system(command.c_str());

	std::ifstream writeLog("output.log");

	output_text.clear();

	std::string line;
	while (std::getline(writeLog, line))
	{
		output_text += line + "\n";
	}

	writeLog.close();

	return output_text;

}
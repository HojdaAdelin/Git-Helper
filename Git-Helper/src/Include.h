#pragma once
#include <msclr/marshal_cppstd.h>
#include <msclr/marshal.h>
#include "GitFunctions/GitInclude.h"

using namespace msclr::interop;
using namespace System;


std::string getRepoStatus(std::string repoName);
std::string ConvertString(String^ str);
std::string commitPushFunction(std::string repoLocation, std::string message);
void openSite(std::string site);
void writeToFile(std::string getLocation);
std::string useLocation();
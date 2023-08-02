#pragma once
#include <msclr/marshal_cppstd.h>
#include <msclr/marshal.h>

using namespace msclr::interop;
using namespace System;

std::string getRepoStatus(std::string repoName);
std::string ConvertString(String^ str);
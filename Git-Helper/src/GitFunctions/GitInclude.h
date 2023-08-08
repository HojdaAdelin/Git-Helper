#pragma once
#include "CloneRepository.h"
#include <string>
#include "CreateRepoForm.h"

void createRepo(std::string locationR);
bool cloneRepo(std::string link, std::string location);
#pragma once
#include "CloneRepository.h"
#include <string>
#include "CreateRepoForm.h"
#include "GitHistory.h"
#include "GitPull.h"
#include "CheckoutBranch.h"

void createRepo(std::string locationR);
bool cloneRepo(std::string link, std::string location);
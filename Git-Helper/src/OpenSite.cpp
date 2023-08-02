#include "Include.h"
#include <string>
#include <iostream>

void openSite(std::string site) {

	system(std::string("start " + site).c_str());

}
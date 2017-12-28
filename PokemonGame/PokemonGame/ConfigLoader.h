#pragma once

using namespace std;
#include <string>

// for convenience
#include "json.hpp"
using json = nlohmann::json;
class ConfigLoader
{
private:
	json jsonData;
	bool isFileValid(string fileName);
public:

	//Constructors
	ConfigLoader();
	ConfigLoader(string fileName);
	
	json getConfig();

	~ConfigLoader();
};


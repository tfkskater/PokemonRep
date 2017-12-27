#pragma once

using namespace std;
#include <string>
class ConfigLoader
{
private:
	void debugFileInput(string fileName);
public:
	ConfigLoader();
	ConfigLoader(string fileName);
	~ConfigLoader();
};


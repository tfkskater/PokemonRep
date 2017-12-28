#pragma once

using namespace std;
#include <string>
class ConfigLoader
{
private:
	bool isFileValid(string fileName);
public:

	//Constructors
	ConfigLoader();
	ConfigLoader(string fileName);



	~ConfigLoader();
};


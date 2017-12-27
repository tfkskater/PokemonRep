#include "stdafx.h"
#include "ConfigLoader.h"

#include "json.hpp"
using namespace std;
#include <iostream>
#include <fstream>
#include <string>
// for convenience
using json = nlohmann::json;

ConfigLoader::ConfigLoader()
{
}

ConfigLoader::ConfigLoader(string fileName)
{
	// read a JSON file
	ifstream i(fileName);

	bool needsDebug = true;
	if(needsDebug)
	{
		debugFileInput(fileName);
	}
	

	json j;
	i >> j;

	cout << j.dump(4) << endl;
}

void ConfigLoader::debugFileInput(string fileName)
{
ifstream i(fileName);

cout << "We got this as the Text" << endl;
cout << "-----------------------" << endl;
cout << i.rdbuf() << endl;
cout << "-----------------------" << endl;
}


ConfigLoader::~ConfigLoader()
{
}

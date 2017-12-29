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
	if(isFileValid(fileName))
	{
		// read a JSON file
		ifstream theFile(fileName);
		theFile >> jsonData;
		//cout << jsonData.dump(4) << endl;
	
		//string firstName = jsonData["1"]["name"];
		//cout << firstName << endl;
	}
}

json ConfigLoader::getConfig()
{
	return jsonData;
}

bool ConfigLoader::isFileValid(string fileName)
{
	ifstream theFile(fileName);
	if (!theFile.is_open())
	{
		cout << "This file wasn't found: " << fileName << endl;
		return false;
	}
	return true;
}


ConfigLoader::~ConfigLoader()
{
}

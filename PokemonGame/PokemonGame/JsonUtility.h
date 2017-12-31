#pragma once
#include <iostream>
#include "json.hpp"

using namespace std;
#include <vector>

using namespace std;
using json = nlohmann::json;
//TODO make this a static singleton
class JsonUtility
{
public:
	JsonUtility();
	string getStringFromJson(json data, string key, string defaultValue = "");
	int getIntFromJson(json data, string key);
	double getDoubleFromJson(json data, string key);
	vector<string> getStringVectorFromJson(json data, string key);//TODO make a templated function to return any array type
	vector<int> getIntVectorFromJson(json data, string key);
	
	~JsonUtility();
};


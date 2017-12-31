#include "stdafx.h"
#include "JsonUtility.h"


JsonUtility::JsonUtility()
{
}

string JsonUtility::getStringFromJson(json data, string key, string defaultValue)
{
	if (!data[key].is_null())
	{
		return data[key].get<string>();
	}
	return defaultValue;
}

int JsonUtility::getIntFromJson(json data, string key)
{
	if (!data[key].is_null())
	{
		return data[key].get<int>();
	}
	return -1;
}

double JsonUtility::getDoubleFromJson(json data, string key)
{
	if (!data[key].is_null())
	{
		return data[key].get<double>();
	}
	return -1.0;
}

vector<string> JsonUtility::getStringVectorFromJson(json data, string key)
{
	if (!data[key].is_null())
	{
		return data[key].get<std::vector<string>>();
	}
	return {"unknown"};
}

vector<int> JsonUtility::getIntVectorFromJson(json data, string key)
{
	if (!data[key].is_null())
	{
		return data[key].get<std::vector<int>>();
	}
	return {-1};
}

JsonUtility::~JsonUtility()
{
}

#include "stdafx.h"
#include "JsonUtility.h"


JsonUtility::JsonUtility()
{
}

string JsonUtility::getStringFromJson(json data, string key, string defaultValue)
{
	string value;
	if (!data[key].is_null())
	{
		value = data[key].get<string>();
	}
	else
	{
		value = defaultValue;
	}
	return value;
}

int JsonUtility::getIntFromJson(json data, string key)
{
	if (!data[key].is_null())
	{
		return data[key].get<int>();
	}
	else
	{
		return -1;
	}
}

double JsonUtility::getDoubleFromJson(json data, string key)
{
	if (!data[key].is_null())
	{
		return data[key].get<double>();
	}
	else
	{
		return -1;
	}
}


JsonUtility::~JsonUtility()
{
}

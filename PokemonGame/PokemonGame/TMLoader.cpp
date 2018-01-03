#include "stdafx.h"
#include "PokemonLoader.h"
#include "JsonUtility.h"

#include <iostream>
#include "Pokemon.h"
#include "ConfigLoader.h"
#include <map>
#include "TMLoader.h"

const string TMLoader::UNKNOWN_AMOUNT = "-1";
const string TMLoader::ATTACK_NAME = "attackName";
const string TMLoader::TYPE = "type";
const string TMLoader::DAMAGE_AMOUNT = "damageAmount";
const string TMLoader::PERCENT_HIT = "percentHit";
const string TMLoader::DESCRIPTION = "description";


TMLoader::TMLoader()
{
	JsonUtility jsonUtil;
	//go to current directory, then go one directory up, then look in Config Folder then grab the file
	string loadThisFileName = "..\\Configs\\TMConfig.json";
	ConfigLoader theTmConfigLoader(loadThisFileName);
	json theTmConfig = theTmConfigLoader.getConfig();

	map<string, TM*> tmList;
	string tmKey;
	json tmJsonData;
	for (json::iterator it = theTmConfig.begin(); it != theTmConfig.end(); ++it)
	{
		tmKey = it.key();
		tmJsonData = it.value();
		tmList[tmKey] = new TM(
			jsonUtil.getStringFromJson(tmJsonData, ATTACK_NAME),
			jsonUtil.getStringFromJson(tmJsonData, TYPE),
			jsonUtil.getStringFromJson(tmJsonData, DAMAGE_AMOUNT),
			jsonUtil.getStringFromJson(tmJsonData, PERCENT_HIT),
			jsonUtil.getStringFromJson(tmJsonData, DESCRIPTION)
		);
	}
	cout << "done loading TM from config" << endl;
}

TMLoader::~TMLoader()
{
}

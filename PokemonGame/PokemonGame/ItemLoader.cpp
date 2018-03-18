#include "stdafx.h"
#include "ItemLoader.h"
#include "JsonUtility.h"
#include <iostream>
#include "ConfigLoader.h"
#include <map>
#include "Item.h"

const string ItemLoader::NAME = "name";

ItemLoader::ItemLoader()
{
	JsonUtility jsonUtil;
	//go to current directory, then go one directory up, then look in Config Folder then grab the file
	string loadThisFileName = "..\\Configs\\ItemConfig.json";
	ConfigLoader theItemConfigLoader(loadThisFileName);
	json theItemConfig = theItemConfigLoader.getConfig();

	map<string, Item*> itemList;
	string itemKey;
	json itemJsonData;
	for (json::iterator it = theItemConfig.begin(); it != theItemConfig.end(); ++it)
	{
		itemKey = it.key();
		itemJsonData = it.value();
		itemList[itemKey] = new Item(
			stoi(itemKey),
			jsonUtil.getStringFromJson(itemJsonData, NAME)
		);
		
		
	}
	cout << "done loading items from config" << endl;
}

ItemLoader::~ItemLoader()
{
}

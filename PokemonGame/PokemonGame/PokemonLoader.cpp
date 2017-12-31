#include "stdafx.h"
#include "PokemonLoader.h"
#include "JsonUtility.h"

#include <iostream>
#include "Pokemon.h"
#include "ConfigLoader.h"
using namespace std;
using json = nlohmann::json;

PokemonLoader::PokemonLoader()
{
	JsonUtility jsonUtil;
	//go to current directory, then go one directory up, then look in Config Folder then grab the file
	string loadThisFileName = "..\\Configs\\PokemonConfig.json";
	ConfigLoader thePokemonConfigLoader(loadThisFileName);
	json thePokeonConfig = thePokemonConfigLoader.getConfig();

	//makeing a pokemon array of size 151
	Pokemon* pokemonList[151];
	string pokemonKey;
	json pokemonJsonData;
	for (json::iterator it = thePokeonConfig.begin(); it != thePokeonConfig.end(); ++it)
	{
		pokemonKey = it.key();
		pokemonJsonData = it.value();
		//we are subtracting 1 from the key and putting each pokemon into the spot in the array
		pokemonList[stoi(pokemonKey) - 1] = new Pokemon(
			jsonUtil.getStringFromJson(pokemonJsonData, "name"),
			jsonUtil.getIntFromJson(pokemonJsonData, "attack"),
			jsonUtil.getIntFromJson(pokemonJsonData, "defense"),
			jsonUtil.getIntFromJson(pokemonJsonData, "evolveLevel"),
			stoi(jsonUtil.getStringFromJson(pokemonJsonData, "evolveTo", "-1")),
			jsonUtil.getStringFromJson(pokemonJsonData, "type"),
			jsonUtil.getStringVectorFromJson(pokemonJsonData, "moves"),
			jsonUtil.getDoubleFromJson(pokemonJsonData, "curve"),
			jsonUtil.getIntVectorFromJson(pokemonJsonData, "levels"),
			jsonUtil.getIntFromJson(pokemonJsonData, "probability")
		);
	}
	cout << "done loading pokemon from config" << endl;
}


PokemonLoader::~PokemonLoader()
{
}

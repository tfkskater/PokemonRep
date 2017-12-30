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

	Pokemon* poke;
	string pokemonKey;
	json pokemonJsonData;
	for (json::iterator it = thePokeonConfig.begin(); it != thePokeonConfig.end(); ++it)
	{
		pokemonKey = it.key();
		pokemonJsonData = it.value();

		poke = new Pokemon(
			jsonUtil.getStringFromJson(pokemonJsonData, "name"),
			jsonUtil.getIntFromJson(pokemonJsonData, "attack"),
			jsonUtil.getIntFromJson(pokemonJsonData, "defense"),
			jsonUtil.getIntFromJson(pokemonJsonData, "evolveLevel"),
			stoi(jsonUtil.getStringFromJson(pokemonJsonData, "evolveTo", "-1")),
			jsonUtil.getStringFromJson(pokemonJsonData, "type"),
			new string[1],
			jsonUtil.getDoubleFromJson(pokemonJsonData, "curve"),
			new int[1],
			jsonUtil.getIntFromJson(pokemonJsonData, "probability")
		);
		cout << poke->getName() << endl;
	}
}

PokemonLoader::~PokemonLoader()
{
}

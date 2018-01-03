#include "stdafx.h"
#include "Pokedex.h"
#include "JsonUtility.h"
#include "ConfigLoader.h"

const string Pokedex::NAME = "name";

Pokedex::Pokedex()
{
	JsonUtility jsonUtil;
	//go to current directory, then go one directory up, then look in Config Folder then grab the file
	string loadThisFileName = "..\\Configs\\PokemonConfig.json"; //TODO load from save file
	ConfigLoader thePokemonConfigLoader(loadThisFileName);
	json thePokeonConfig = thePokemonConfigLoader.getConfig();

	string pokemonKey;
	json pokemonJsonData;
	for (json::iterator it = thePokeonConfig.begin(); it != thePokeonConfig.end(); ++it)
	{
		pokemonKey = it.key();
		pokemonJsonData = it.value();
		pokedexEntries[pokemonKey] = new PokedexEntry(
			jsonUtil.getStringFromJson(pokemonJsonData, NAME),
			false, //TODO come back to mark seen and own officially
			false
		);
	}
	cout << "done creating pokedex" << endl;
}


Pokedex::~Pokedex()
{
}

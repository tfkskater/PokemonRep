#include "stdafx.h"
#include "PokemonLoader.h"
#include "JsonUtility.h"

#include <iostream>
#include "Pokemon.h"
#include "ConfigLoader.h"
#include <map>
using namespace std;
using json = nlohmann::json;

const string PokemonLoader::UNKNOWN_AMOUNT = "-1";
const string PokemonLoader::NAME = "name";
const string PokemonLoader::ATTACK = "attack";
const string PokemonLoader::DEFENSE = "defense";
const string PokemonLoader::EVOLVE_LEVEL = "evolveLevel";
const string PokemonLoader::EVOLVE_TO = "evolveTo";
const string PokemonLoader::TYPE = "type";
const string PokemonLoader::MOVES = "moves";
const string PokemonLoader::CURVE = "curve";
const string PokemonLoader::LEVELS = "levels";
const string PokemonLoader::PROBABILITY = "probability";

PokemonLoader::PokemonLoader()
{
	JsonUtility jsonUtil;
	//go to current directory, then go one directory up, then look in Config Folder then grab the file
	string loadThisFileName = "..\\Configs\\PokemonConfig.json";
	ConfigLoader thePokemonConfigLoader(loadThisFileName);
	json thePokeonConfig = thePokemonConfigLoader.getConfig();

	map<int, Pokemon*> pokemonList;
	string pokemonKey;
	json pokemonJsonData;
	for (json::iterator it = thePokeonConfig.begin(); it != thePokeonConfig.end(); ++it)
	{
		pokemonKey = it.key();
		pokemonJsonData = it.value();
		pokemonList[stoi(pokemonKey)] = new Pokemon(
			jsonUtil.getStringFromJson(pokemonJsonData, NAME),
			jsonUtil.getIntFromJson(pokemonJsonData, ATTACK),
			jsonUtil.getIntFromJson(pokemonJsonData, DEFENSE),
			jsonUtil.getIntFromJson(pokemonJsonData, EVOLVE_LEVEL),
			stoi(jsonUtil.getStringFromJson(pokemonJsonData, EVOLVE_TO, UNKNOWN_AMOUNT)),
			jsonUtil.getStringFromJson(pokemonJsonData, TYPE),
			jsonUtil.getStringVectorFromJson(pokemonJsonData, MOVES),
			jsonUtil.getDoubleFromJson(pokemonJsonData, CURVE),
			jsonUtil.getIntVectorFromJson(pokemonJsonData, LEVELS),
			jsonUtil.getIntFromJson(pokemonJsonData, PROBABILITY)
		);
	}
	cout << "done loading pokemon from config" << endl;
}


PokemonLoader::~PokemonLoader()
{
}

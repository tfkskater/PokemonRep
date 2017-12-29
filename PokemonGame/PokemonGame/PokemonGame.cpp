// PokemonGame.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"//needs to be the first line
#include <iostream>
#include "Pokemon.h"
#include "ConfigLoader.h"
using namespace std;

using json = nlohmann::json;

string getStringFromJson(json data, string key, string defaultValue = "")
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

int getIntFromJson(json data, string key)
{
	json t = data[key];

	if (!data[key].is_null())
	{
		return data[key].get<int>();
	}
	else
	{
		return -1;
	}
}

double getDoubleFromJson(json data, string key)
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

int main()
{
	//go to current directory, then go one directory up, then look in Config Folder then grab the file
	//string loadThisFileName = "..\\Configs\\ConfigTest.json";
	string loadThisFileName = "..\\Configs\\PokemonConfig.json";
	ConfigLoader thePokemonConfigLoader(loadThisFileName);
	json thePokeonConfig = thePokemonConfigLoader.getConfig();

	

	
	Pokemon* poke;
	string pokemonKey;
	json pokemonJsonData;
	
	string name;
	int attack;
	int defense;
	int evolveLevel;
	int evolveTo;
	string type;
	string* moves;
	int curve;
	int* levels;
	int probability;

	for (json::iterator it = thePokeonConfig.begin(); it != thePokeonConfig.end(); ++it)
	{
		pokemonKey = it.key();
		pokemonJsonData = it.value();

		string box = "name";

		name = getStringFromJson(pokemonJsonData, box);
		attack = getIntFromJson(pokemonJsonData, "attack");
		defense= getIntFromJson(pokemonJsonData, "defense");
		evolveLevel = getIntFromJson(pokemonJsonData, "evolveLevel");
		evolveTo = stoi(getStringFromJson(pokemonJsonData, "evolveTo", "-1"));
		type = getStringFromJson(pokemonJsonData, "type");
		//auto moves = pokemonJsonData["moves"].get<string>();
		moves = new string[1];
		curve = getDoubleFromJson(pokemonJsonData, "curve");
		//auto levels =pokemonJsonData["levels"].get<int>();
		levels = new int[1];
		probability = getIntFromJson(pokemonJsonData, "probability");

		poke = new Pokemon(name, attack, defense, evolveLevel, evolveTo, type, moves, curve, levels, probability);

		//cout << pokemonKey << " : " << pokemonJsonData << "\n";
		cout << poke->getName() << "\n";
		//break;
	}

	system("pause");
	return 0;
}



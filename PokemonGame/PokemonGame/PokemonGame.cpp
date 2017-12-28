// PokemonGame.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"//needs to be the first line
#include <iostream>
#include "Pokemon.h"
#include "ConfigLoader.h"
using namespace std;

int main()
{
	//go to current directory, then go one directory up, then look in Config Folder then grab the file
	//string loadThisFileName = "..\\Configs\\ConfigTest.json";
	string loadThisFileName = "..\\Configs\\PokemonConfig.json";
	ConfigLoader thePokemonConfigLoader(loadThisFileName);
	json thePokeonConfig = thePokemonConfigLoader.getConfig();




	Pokemon* poke;
	string pokeonKey;
	json pokemonJsonData;
	for (json::iterator it = thePokeonConfig.begin(); it != thePokeonConfig.end(); ++it)
	{
		pokeonKey = it.key();
		pokemonJsonData = it.value();

		//cout << pokeonKey << " : " << pokemonJsonData << "\n";
		break;
	}



	Pokemon* Charmander = new Pokemon("Charmander", 10, 20, 10, 8, "fire", NULL, 5, NULL, 3);
	cout << "the name is\n" << Charmander->getName() << endl;
	system("pause");
	return 0;
}



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
	ConfigLoader theConfigLoader(loadThisFileName);
	Pokemon Charmander;
	cout << Charmander.getName() << endl;
	system("pause");
	return 0;
}


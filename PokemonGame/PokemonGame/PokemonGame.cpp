// PokemonGame.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"//needs to be the first line
#include <iostream>
#include "ConfigLoader.h"
using namespace std;

int main()
{
	//go to current directory, then go one directory up, then look in Config Folder then grab the file
	ConfigLoader c("..\\Configs\\PokemonConfig.json");
	system("pause");
	return 0;
}


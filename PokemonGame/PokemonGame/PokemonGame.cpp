// PokemonGame.cpp : Defines the entry point for the console application.
#include "stdafx.h"//needs to be the first line
#include <iostream>
#include "StartUpManager.h"
#include "json.hpp"
using namespace std;
using json = nlohmann::json;
int main()
{
	StartUpManager startUpManager;
	startUpManager.startRequiredManagers();
	system("pause");
	return 0;
}



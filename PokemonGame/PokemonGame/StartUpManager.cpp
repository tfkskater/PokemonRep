#include "stdafx.h"
#include "StartUpManager.h"
#include "PokemonLoader.h"

StartUpManager::StartUpManager()
{
}

//Start Loading all the managers/assets we need here.
void StartUpManager::startRequiredManagers()
{
	PokemonLoader pokeLoader;//loading the pokemon from the config into memory.
	//SoundLoader
	//TM/HMLoader
}

StartUpManager::~StartUpManager()
{
}
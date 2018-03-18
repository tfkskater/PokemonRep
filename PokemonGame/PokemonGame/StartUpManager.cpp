#include "stdafx.h"
#include "StartUpManager.h"
#include "PokemonLoader.h"
#include "TMLoader.h"
#include "Trainer.h"
#include "ItemLoader.h"

StartUpManager::StartUpManager()
{
}

//Start Loading all the managers/assets we need here.
void StartUpManager::startRequiredManagers()
{
	PokemonLoader pokeLoader;//loading the pokemon from the config into memory.
	//SoundLoader
	TMLoader tmLoader; 
	ItemLoader itemLoader;
	Trainer brock("Brock", 250);
}

StartUpManager::~StartUpManager()
{
}

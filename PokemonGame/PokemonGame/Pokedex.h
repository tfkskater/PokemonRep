#pragma once
#include "PokedexEntry.h"
#include <string>
using namespace std;
#include <map>
class Pokedex
{
private:
	static const string NAME;
	map<string, PokedexEntry*> pokedexEntries;

public:
	Pokedex();
	~Pokedex();
};


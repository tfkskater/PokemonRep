#pragma once
#include <string>
#include "Pokemon.h"
using namespace std;
#include "Pokedex.h"


class Trainer
{
private:

	static const string UNKNOWN;
	static const int NO_AMOUNT;

	string name;
	int money;
	Pokemon* carryPokemon[6];
	Pokedex trainerPokedex;

public:
	Trainer();
	Trainer(string n, int m);
	~Trainer();
};


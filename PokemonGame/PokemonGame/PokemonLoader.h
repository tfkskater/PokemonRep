#pragma once
using namespace std;
#include <string>
class PokemonLoader
{
private:
	//defining the DEFAULT VALUES
	static const string UNKNOWN_AMOUNT;

	//defining the JSON keys
	static const string NAME;
	static const string ATTACK;
	static const string DEFENSE;
	static const string EVOLVE_LEVEL;
	static const string EVOLVE_TO;
	static const string TYPE;
	static const string MOVES;
	static const string CURVE;
	static const string LEVELS;
	static const string PROBABILITY;

public:
	PokemonLoader();
	~PokemonLoader();
};


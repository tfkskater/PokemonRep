#pragma once
using namespace std;
#include <string>
class PokedexEntry
{
private:
	string pokemonName;
	bool seen;
	bool own;

public:
	PokedexEntry(string pN, bool s, bool o);
	//setters
	void markSeen(bool s);
	void markOwn(bool o);
	//getters
	string getName();
	bool getSeen();
	bool getOwn();
	~PokedexEntry();
};


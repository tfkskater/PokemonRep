#include "stdafx.h"
#include "PokedexEntry.h"


PokedexEntry::PokedexEntry(	string pN, bool s, bool o)
	:pokemonName(pN), seen(s), own(o)
{
}

void PokedexEntry::markSeen(bool s)
{
	seen = s;
}

void PokedexEntry::markOwn(bool o)
{
	own = o;
}

string PokedexEntry::getName()
{
	return pokemonName;
}

bool PokedexEntry::getSeen()
{
	return seen;
}

bool PokedexEntry::getOwn()
{
	return own;
}


PokedexEntry::~PokedexEntry()
{
}

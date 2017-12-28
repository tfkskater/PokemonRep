#include "stdafx.h"
#include "Pokemon.h"
using namespace std;
#include <string>

Pokemon::Pokemon()
{
	name = "unknown";
	attack = 5;
	defense = 5;
	evolveLevel = 10;
	evolveTo = 15;
	type = "unknown";
	moves = NULL;
	curve = 5;
	levels = NULL;
	probability = 4;
}

string Pokemon::getName()
{
	return name;
}


Pokemon::~Pokemon()
{
}

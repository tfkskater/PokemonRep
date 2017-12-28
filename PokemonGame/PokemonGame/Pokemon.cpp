#include "stdafx.h"
#include "Pokemon.h"
using namespace std;
#include <string>
#include <iostream>

const string Pokemon::UNKNOWN = "unknown";
const int Pokemon::NO_AMOUNT = -1;


Pokemon::Pokemon()
	:name(UNKNOWN), attack(NO_AMOUNT), defense(NO_AMOUNT), evolveLevel(NO_AMOUNT), evolveTo(NO_AMOUNT), type(UNKNOWN), moves(NULL), curve(NO_AMOUNT), levels(NULL), probability(NO_AMOUNT)
{
	
}

Pokemon::Pokemon(string n, int a, int d, int eL, int eT, string t, string * m, int c, int * l, int p)
	: name(n), attack(a), defense(d), evolveLevel(eL), evolveTo(eT), type(t), moves(m), curve(c), levels(l), probability(p)
{

}


string Pokemon::getName()
{
	return name;
}


Pokemon::~Pokemon()
{
	
}

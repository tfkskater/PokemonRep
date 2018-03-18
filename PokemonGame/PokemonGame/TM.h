#pragma once
using namespace std;
#include <string>
#include "Item.h"
class TM : Item
{
private:

	static const string UNKNOWN;
	static const int NO_AMOUNT;

	string type;
	string damageAmount;
	string percentHit;
	string description;

public:
	TM();
	TM(string n, string t, string dA, string pH, string d);
	~TM();
};

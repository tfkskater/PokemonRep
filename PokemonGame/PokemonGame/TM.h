#pragma once
using namespace std;
#include <string>
class TM
{
private:

	static const string UNKNOWN;
	static const int NO_AMOUNT;

	string attackName;
	string type;
	string damageAmount;
	string percentHit;
	string description;

public:
	TM();
	TM(string aN, string t, string dA, string pH, string d);
	string getAttackName();
	~TM();
};

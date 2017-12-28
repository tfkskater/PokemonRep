#pragma once
using namespace std;
#include <string>
class Pokemon
{
private:
	//defining the defualts
	static const string UNKNOWN;
	static const int NO_AMOUNT;



	string name;
	int attack;
	int defense;
	int evolveLevel;
	int evolveTo;
	string type;
	string* moves;
	int curve;
	int* levels;
	int probability;

public:
	Pokemon();
	Pokemon(string n, int a, int d, int eL, int eT, string t, string* m, int c, int* l, int p);
	string getName();
	~Pokemon();
};


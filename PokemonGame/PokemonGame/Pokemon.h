#pragma once
using namespace std;
#include <string>
#include <vector>

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
	vector<string> moves;
	int curve;
	vector<int> levels;
	int probability;

public:
	Pokemon();
	Pokemon(string n, int a, int d, int eL, int eT, string t, vector<string> m, int c, vector<int> l, int p);
	string getName();
	~Pokemon();
};


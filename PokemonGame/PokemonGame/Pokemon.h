#pragma once
using namespace std;
#include <string>
class Pokemon
{
private:

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
	string getName();
	~Pokemon();
};


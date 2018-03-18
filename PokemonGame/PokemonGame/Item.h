#pragma once
using namespace std;
#include <string>
#include <vector>
class Item
{
private: 
	static const int UNKNOWN_NUMBER;
	static const string UNKNOWN_NAME;

protected:
	string name;
	int itemNumber;

public:
	
	
	Item();
	Item(int iN, string n);
	~Item();
};



#pragma once
#include "stdafx.h"
#include "ConfigLoader.h"

#include "json.hpp"
using namespace std;
#include <iostream>
#include <fstream>
#include <string>
#include "TM.h"
class TMLoader
{
private:

	//defining JSON keys
	static const string ATTACK_NAME;
	static const string TYPE;
	static const string DAMAGE_AMOUNT;
	static const string PERCENT_HIT;
	static const string DESCRIPTION;
public:
	TMLoader();
	~TMLoader();
};


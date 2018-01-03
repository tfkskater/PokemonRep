#include "stdafx.h"
using namespace std;
#include <string>
#include <iostream>
#include "TM.h"

const string TM::UNKNOWN = "unknown";
const int TM::NO_AMOUNT = -1;

TM::TM()
	:attackName(UNKNOWN), type(UNKNOWN), damageAmount(UNKNOWN), percentHit(UNKNOWN), description(UNKNOWN)
{

}
TM::TM(string aN, string t, string dA, string pH, string d)
	: attackName(aN), type(t), damageAmount(dA), percentHit(pH), description(d)
{

}

string TM::getAttackName()
{
	return attackName;
}

TM::~TM()
{

}
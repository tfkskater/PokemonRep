#include "stdafx.h"
using namespace std;
#include <string>
#include <iostream>
#include "TM.h"


const string TM::UNKNOWN = "unknown";
const int TM::NO_AMOUNT = -1;

TM::TM()
	:type(UNKNOWN), damageAmount(UNKNOWN), percentHit(UNKNOWN), description(UNKNOWN)
{
	name = UNKNOWN;
}
TM::TM(string n, string t, string dA, string pH, string d)
	:type(t), damageAmount(dA), percentHit(pH), description(d)
{
	name = n;
}

TM::~TM()
{

}
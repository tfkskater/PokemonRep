#include "stdafx.h"
#include "Trainer.h"

const string Trainer::UNKNOWN = "unknown";
const int Trainer::NO_AMOUNT = -1;

Trainer::Trainer()
	:name(UNKNOWN), money(NO_AMOUNT)
{	

}

Trainer::Trainer(string n, int m)
	: name(n), money(m)
{

}


Trainer::~Trainer()
{
}

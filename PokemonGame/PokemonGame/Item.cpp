#include "stdafx.h"
#include "JsonUtility.h"
#include "Item.h"



Item::Item()
{
}

Item::Item(int iN, string n)
	: itemNumber(iN), name(n)
{
}

Item::~Item()
{
}

#pragma once
#include "towarowy.h"

class Cargo : public Towarowy {
public:
	string producent;
	Cargo(double masa, double pojemnosc, string pro);
	string toString();
};
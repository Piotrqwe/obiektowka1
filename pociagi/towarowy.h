#include "wagon.h"
#include <string>
#include <iostream>
#pragma once
using namespace std;

class Towarowy : public Wagon {
public:
	double pojemnosc;
	string toString();
	Towarowy(double masa, double pojemnosc);
};
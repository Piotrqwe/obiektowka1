#include "wagon.h"
#include <iostream>
#include <string>
#pragma once
using namespace std;

class Osobowy : public Wagon {
public:
	int miejsca;
	string toString();
	Osobowy(double masa, int miejsca);
}; 
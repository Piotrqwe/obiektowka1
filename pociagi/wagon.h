#include <string>
#pragma once
using namespace std;

class Wagon {
public:
	double masa_max;
	virtual string toString() = 0;
	Wagon(double masa);
};
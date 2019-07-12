#include "towarowy.h"

string Towarowy::toString() {
	return "Towarowy:\n\t\tudzwig:" + to_string(this->masa_max) + "\n\t\tpojemnosc: " + to_string(this->pojemnosc) + "\n";
}

Towarowy::Towarowy(double masa, double pojemnosc) : Wagon(masa) {
	this->pojemnosc = pojemnosc;
}

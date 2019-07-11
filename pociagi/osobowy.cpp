#include "osobowy.h"

string Osobowy::toString()
{
	return "Osobowy:\n\t\tudzwig:" + to_string(this->masa_max)+"\n\t\tmiejsca: " + to_string(this->miejsca) + "\n";
}

Osobowy::Osobowy(double masa, int miejsca) : Wagon(masa)
{
	this->miejsca = miejsca;
}

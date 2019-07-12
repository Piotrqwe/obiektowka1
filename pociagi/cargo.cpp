#include "cargo.h"


string Cargo::toString() {
	return this->Towarowy::toString() + "\t\tproducent: " + producent + "\n";
}

Cargo::Cargo(double masa, double pojemnosc, string pro) : Towarowy(masa, pojemnosc){
	this->producent = pro;
}




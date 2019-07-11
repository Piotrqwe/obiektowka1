#include "pociag.h"

double Pociag::srednia_masa_dopuszczalna_wagonow() {
	return 0;
}

double Pociag::masa_dopuszczalna_wagonow() {

	double masa = 0;
	for (Wagon* w : wagony)
	{
		masa += w->masa_max;
	}

	return masa;
}

int Pociag::wylicz_wagony() {
	return wagony.size();
}

void Pociag::usun_wagon(int i) {
	if (wagony.size() > i) {
		Wagon* w = wagony[i];
		wagony.erase(wagony.begin() + i);
		delete w;
	}
}

void Pociag::dodaj_wagon(Wagon* w)
{
	this->wagony.push_back(w);
}

string Pociag::toString()
{
	string s = "Pociag:\n";

	for (Wagon* w : wagony)
	{
		s += "	" + w->toString();
	}
	return s;
}

Pociag::~Pociag()
{
	for (Wagon* w : wagony) {
		delete w;
	}
}

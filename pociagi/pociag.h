#include <iostream>
#include <vector>
#include "wagon.h"
#pragma once

using namespace std;

class Pociag {
public:
	vector<Wagon*> wagony;
	double masa_max;
	double srednia_masa_dopuszczalna_wagonow();
	double masa_dopuszczalna_wagonow();
	int wylicz_wagony();
	void usun_wagon(int i);
	void dodaj_wagon(Wagon*);
	string toString();

	~Pociag();
};


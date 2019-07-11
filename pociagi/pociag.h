#pragma once
#include <iostream>
#include "wagon.h"

using namespace std;




class pociag {
public:
	wagon *next = NULL;
	double masa_max;
	double srednia_masa_dopuszczalna_wagonow();
	double masa_dopuszczalna_wagonow();
	int wylicz_wagony();
	void usun_wagon();
	void dodaj_wagon();
};


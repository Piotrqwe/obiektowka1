#pragma once
#include <iostream>

using namespace std;




class wagon {
public:
	wagon *next = NULL;
	double masa_max;
	virtual void opisz() = 0;
};

class osobowy : public wagon {
public:
	int miejsca;
	void opisz();

};

class towarowy : public wagon {
public:
	double pojemnosc;
	void opisz();

};
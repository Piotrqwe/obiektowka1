#include <iostream>
#include "pociag.h"
#include "towarowy.h"
#include "osobowy.h"

using namespace std;

Pociag mock() {
	Pociag p;
	p.dodaj_wagon(new Towarowy(1, 2));
	p.dodaj_wagon(new Towarowy(11, 33));
	p.dodaj_wagon(new Osobowy(3, 12));
	p.dodaj_wagon(new Towarowy(5, 8));
	p.dodaj_wagon(new Osobowy(99, 69));
	p.dodaj_wagon(new Towarowy(5, 8));
	return p;
}

int main() {
	Pociag p = mock();
	int wybor = 0;
	cout << p.toString() << endl;

	//while (true) {
	//	cout<<"1 Dodaj wagon\n2 usun wagon\n3 wylicz wagony\n4 "
	//	system("cls");
	//}
	system("pause");
	return 0;
}
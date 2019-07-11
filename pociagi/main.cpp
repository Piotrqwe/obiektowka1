#include <iostream>
#include "pociag.h"
#include "towarowy.h"
#include "osobowy.h"

using namespace std;

Pociag* mock() {
	Pociag* p = new Pociag();
	p->dodaj_wagon(new Towarowy(1, 2));
	p->dodaj_wagon(new Towarowy(11, 33));
	p->dodaj_wagon(new Osobowy(3, 12));
	p->dodaj_wagon(new Towarowy(5, 8));
	p->dodaj_wagon(new Osobowy(99, 69));
	p->dodaj_wagon(new Towarowy(5, 8));
	return p;
};

void dodawanieWagonu(Pociag *p) {
	int wybor, miejsca;
	double udzwig, pojemnosc;
	cout << "1.Osobowy\n2.Towarowy\n";
	cin >> wybor;
	switch (wybor){
	case 1:
		cout << "podaj udzwig: ";
		cin >> udzwig;
		cout << "podaj ilosc miejsc: ";
		cin >> miejsca;
		p->dodaj_wagon( new Osobowy(udzwig, miejsca));
		return;
	case 2:
		cout << "podaj udzwig: ";
		cin >> udzwig;
		cout << "podaj pojemnosc: ";
		cin >> pojemnosc;
		p->dodaj_wagon(new Towarowy(udzwig, pojemnosc));
		return;
	}
	return;
}

void usuwanieWagonu(Pociag *p) {
	int wybor;
	cout << "podaj pozycje wagonu: ";
	cin >> wybor;
	p->usun_wagon(--wybor);
}

int main() {
	
	Pociag* p = mock();
	int wybor = 0;
	
	while (true) {
		cout << p->toString() << endl;
		cout << "1.Dodaj wagon\n2.Usun wagon\n3.Wylicz wagony\n4.Suma udzwigow\n5.Sredni udzwig\n6.Wyjdz\n";
		cin >> wybor;
		switch (wybor){
		case 1: dodawanieWagonu(p); break;
		case 2: usuwanieWagonu(p); break;
		case 3: cout << "Ilosc wagonow: " << p->wylicz_wagony(); cout << endl; system("pause"); break;
		case 4: cout << "Masa dopuszczalna: " << p->masa_dopuszczalna_wagonow(); cout << endl; system("pause"); break;
		case 5: cout << "Srednia masa dopuszczalna: " << p->srednia_masa_dopuszczalna_wagonow(); cout << endl; system("pause"); break;
		
		default:
			return 0;
		}
		system("cls");
	}
	delete p;
	return 0;
}
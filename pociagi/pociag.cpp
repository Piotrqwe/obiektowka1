#include "pociag.h"





double pociag::srednia_masa_dopuszczalna_wagonow() {

}

double pociag::masa_dopuszczalna_wagonow() {

}

int pociag::wylicz_wagony() {

}

void pociag::usun_wagon() {

}

void pociag::dodaj_wagon() {
	int x;
	wagon *temp = next;

	cout << "podaj rodzaj wagonu:\n1 osobowy\n2 towarowy\n";
	cin >> x;

	while (temp) {
		temp = temp->next;
	}



}



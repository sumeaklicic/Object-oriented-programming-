#include <iostream>
#include "Red.h"

/* Napiši generičku klasu Queue<T> koja implementira osnovne operacije reda. Klasa treba podržavati:

Dodavanje elemenata na kraj reda (enqueue).
Uklanjanje elemenata s početka reda (dequeue). */

int main() {
	
	Red <int> jedan;
	jedan.dodajElement(2);
	cout<<endl;
	jedan.dodajElement(8);
	cout<<endl;
	jedan.dodajElement(1);
	cout<<endl;
	jedan.ispis();
	jedan.izbaciElement();
	cout<<endl;
	jedan.ispis();
	return 0;
}
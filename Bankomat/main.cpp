#include <iostream>
#include "Banka.h"

int main() {
	
	Banka racun("Sumea", 124,2345.9);
	cout<<racun;
	racun.uplata(20);
	racun.isplata(10);
	Banka racun2 ("Hana", 345, 127.8);
	Banka novi = racun +racun2;
	cout<<novi;
	return 0;
}
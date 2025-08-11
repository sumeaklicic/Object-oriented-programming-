#include <iostream>
#include "Vlasnik.h"

/*Klasa Automobil:

Atributi:
marka (tip: string)
model (tip: string)
godinaProizvodnje (tip: int)
registracijskiBroj (tip: string)
Metode:
void prikaziDetalje(): Ispisuje sve detalje o automobilu.
Klasa Vlasnik:

Atributi:

ime (tip: string)
prezime (tip: string)
jmbg (tip: string)
automobil (tip: Automobil, možeš koristiti referencu ili pokazivač)
Metode:

void prikaziInformacije(): Ispisuje informacije o vlasniku i njegovom automobilu.
Zahtevi:

U main funkciji, kreiraj objekat klase Automobil i objekat klase Vlasnik.
Postavi vrednosti atributima objekata.
Pozovi metode za prikaz informacija o automobilu i vlasniku.*/


int main() {
	
	Automobil auto1{"audi", "q7", 2006};
	Vlasnik prviVlasnik{"sudo", "sudic", auto1};
	prviVlasnik.ispis();
	return 0;
}
#ifndef VLASNIK_H
#define VLASNIK_H
#include "Automobil.h"

/*Klasa Vlasnik:

Atributi:

ime (tip: string)
prezime (tip: string)
jmbg (tip: string)
automobil (tip: Automobil, možeš koristiti referencu ili pokazivač)
Metode:

void prikaziInformacije(): Ispisuje informacije o vlasniku i njegovom automobilu.
*/


class Vlasnik
{
	
	string ime;
	string prezime;
	Automobil automobil;
	
	public:
		
		Vlasnik(string i, string p, Automobil &a)
		{
			ime=i;
			prezime=p;
			automobil.model=a.model;
			automobil.marka=a.marka;
			automobil.godiste=a.godiste;
		}
		
		void ispis()
		{
			cout<<"Ime i prezime vlasnika "<<ime<<" "<<prezime<<endl
				<< "Informacije o automobilu "<<endl;
				automobil.prikaziDetalje();
		}

};

#endif
#include <iostream>
#include "Banka.h"
#include <stdexcept>

/* 
Napravi instancu klase BankovniRacun.
Omogući korisniku da:
Unese iznos za uplatu ili podizanje.
Koristi try-catch za hvatanje grešaka (npr. nevalidan unos ili nedovoljna sredstva).
Ispisuje poruku greške iz catch bloka ako nešto pođe po zlu. */

int main() {
	
	try
	{
	int opcija;
	int broj;
	Banka prva(300);
	cout<<"1.Uplata novca"<<endl;
	cout<<"2.Isplata novca"<<endl;
	cin>>opcija;
	
	if(opcija==1)
	{
		cin>>broj;
		prva.uplata(broj);
	}
	
	if(opcija==2)
	{
		cin>>broj;
		prva.podigni(broj);
	}
	
	if( opcija!=1 && opcija!=2)
	{
		cout<<"Pogresna opcija"<<endl;
	}
	prva.prikaziIznos();
	
	}
	
	
	catch( std::exception &e)
	{
		std::cerr<<e.what();
	}
	return 0;
}
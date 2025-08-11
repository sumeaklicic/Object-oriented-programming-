#ifndef BANKA_H
#define BANKA_H
#include <iostream>
using namespace std;

/* Napravi klasu BankovniRacun sa atributima broj računa, ime vlasnika i trenutno stanje. Implementiraj sledeće:

Konstruktor za inicijalizaciju broja računa, imena vlasnika i početnog stanja.
Metodu uplati(double iznos) za povećanje stanja računa.
Metodu isplati(double iznos) koja smanjuje stanje računa (ako je dovoljno sredstava).
Preopterećen operator + za spajanje dva računa (prebacuje sredstva s jednog računa na drugi).
Preopterećen operator << za ispis podataka o računu u formatu Broj: xxx, Vlasnik: xxx, Stanje: xxx. */

class Banka
{
	int broj_racuna;
	string ime;
	float stanje_racuna;
	
	public:
		
		Banka()
		{
			broj_racuna=0;
			stanje_racuna=0;
		}
		
		Banka(string i, int br, float s)
		{
			ime=i;
			broj_racuna=br;
			stanje_racuna=s;
		}
		
		void uplata (int x)
		{
			stanje_racuna = stanje_racuna + x;
			cout<<"Novo stanje racuna je "<<stanje_racuna<<endl;
		}
		
		void isplata (int y)
		{
			if(y<=stanje_racuna)
			{
				stanje_racuna = stanje_racuna-y;
				cout<<"Novo stanje racuna je "<<stanje_racuna<<endl;
			}
			
			else
			{
				cout<<"Nemamo dovoljno novca za isplatu"<<endl;
			}
			
		}
		
		Banka operator + (Banka &drugi)
		{
			Banka nova;
			//Ime i broj racuna ostaju od prvog, samo se broj sredstava na racunu mijenja
			nova.broj_racuna = this->broj_racuna;
			nova.ime = this->ime;
			nova.stanje_racuna = this->stanje_racuna + drugi.stanje_racuna;
			return nova;
		}
		
		friend ostream & operator << (ostream &out, Banka &b)
		{
			out<<"Ime vlasnika racuna "<<b.ime<<" Broj racuna "<<b.broj_racuna<<" Stanje na racunu "<<b.stanje_racuna<<endl;
			return out;
		}

};

#endif
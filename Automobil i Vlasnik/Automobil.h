#ifndef AUTOMOBIL_H
#define AUTOMOBIL_H

#include <iostream>
using namespace std;


/*Klasa Automobil:

Atributi:
marka (tip: string)
model (tip: string)
godinaProizvodnje (tip: int)
registracijskiBroj (tip: string)
Metode:
void prikaziDetalje(): Ispisuje sve detalje o automobilu.*/


class Automobil
{
	public:
		
		string marka;
		string model;
		int godiste;
		
		Automobil(){
			godiste=0;
		}
		
		Automobil (string m, string ma, int g)
		{
			marka=m;
			model=ma;
			godiste=g;
		}
		
		void prikaziDetalje()
		{
			cout<<"Marka automobila "<<marka<<endl
				<<"Model automobila "<<model<<endl
				<<"Godiste automobila "<<godiste<<endl;
		}

};

#endif
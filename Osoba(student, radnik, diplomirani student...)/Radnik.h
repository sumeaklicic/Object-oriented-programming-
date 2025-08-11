#ifndef RADNIK_H
#define RADNIK_H
#include "Osoba.h"

class Radnik: public Osoba
{
	public:
		
		Radnik(string i, string p, int br, string po): Osoba(i,p,br), pozicija(po){};
		
		void ispis()
		{
			Osoba::ispis();
			cout<<" pozicija "<<pozicija;
		}
		
	protected:
		
		string pozicija;
};

#endif
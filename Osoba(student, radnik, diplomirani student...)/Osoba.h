#ifndef OSOBA_H
#define OSOBA_H
#include <iostream>
using namespace std;

class Osoba
{
	public:
		
		Osoba (string i, string p, int br): ime(i), prezime(p), JMBG(br){};
		
		void ispis()
		{
			cout<<"Ime "<<ime<<" prezime "<<prezime;
		}

	protected:
		
		string ime, prezime;
		int JMBG;
};

#endif
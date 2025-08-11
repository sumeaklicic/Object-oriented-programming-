#include <iostream>
#include "Zaposlenici.h"

/* 
Definiši niz od 3 zaposlenika.
Omogući unos podataka za svakog zaposlenika.
Ispiši podatke o svakom zaposleniku, uključujući njegovu ukupnu platu.
Pronađi zaposlenika s najvećom ukupnom platom i ispiši njegove podatke. */

int main() {
	
	int duzina=3;
	Zaposlenici zaposlenik;
	Zaposlenici *niz = new Zaposlenici[duzina];
	Zaposlenici max=niz[0];
	
	for(int i=0; i<duzina; i++)
	{
		cin>>niz[i];
	}
	
	for(int i=0; i<duzina; i++)
	{
		cout<<niz[i]<<endl;
	}
	
	for(int i=0; i<duzina; i++)
	{
		zaposlenik=niz[i];
		
		if(zaposlenik>max)
		{
			max = zaposlenik;
		}

	}
	
	cout<<"Najvecu platu ima ";
	cout<<max;
	return 0;
}
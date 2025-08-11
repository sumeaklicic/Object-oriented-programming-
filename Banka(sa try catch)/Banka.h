#ifndef BANKA_H
#define BANKA_H
#include <iostream>
#include <stdexcept>
using namespace std;

/*Napiši program koji simulira osnovne operacije na bankovnom računu. Kreiraj klasu BankovniRacun sa sljedećim funkcijama:

Atributi:
saldo (float) – trenutni iznos na računu.
Metode:

uplati(float iznos) – dodaje iznos na račun. Ako je iznos manji ili jednak nuli, baci izuzetak std::invalid_argument sa porukom: "Iznos uplate mora biti veći od nule."
podigni(float iznos) – oduzima iznos s računa. Ako je iznos veći od salda, baci izuzetak std::out_of_range sa porukom: "Nedovoljno sredstava na računu." Ako je iznos manji ili jednak nuli, baci std::invalid_argument sa porukom: "Iznos mora biti pozitivan."
prikaziSaldo() – ispisuje trenutni saldo.

*/

class Banka
{
	float iznos;
	
	public:
		
		Banka(float i)
		{
			iznos=i;
		}
		
		void uplata(float novac)
		{
			if(novac<=0) throw invalid_argument ("Uneseni broj je ili 0 ili manji od 0");
			
			else
			{
				iznos=iznos+ novac;
			}
			
		}
		
		float podigni(int novac)
		{
			if(novac>iznos) throw invalid_argument ("Nemamo toliko sredstava za isplatu");
			
			else
			{
				iznos=iznos-novac;
			}
		}
		
		void prikaziIznos()
		{
			cout<<"Na racunu imate "<<iznos<<endl;
		}

};

#endif
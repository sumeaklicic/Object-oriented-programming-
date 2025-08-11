#ifndef ZAPOSLENICI_H
#define ZAPOSLENICI_H
#include <iostream>
using namespace std;

/*Napiši program koji simulira upravljanje podacima o zaposlenima u kompaniji.

Napravi klasu Zaposlenik sa sljedećim atributima:

string imePrezime – ime i prezime zaposlenog,
float plata – osnovna plata zaposlenog,
int radniSati – broj sati koje zaposlenik radi mjesečno,
float cijenaPoSatu – cijena jednog radnog sata.
Javne metode:

Konstruktor koji prima sve četiri vrijednosti.
Metodu float izracunajPlatu() koja vraća ukupnu platu (plata + (radniSati * cijenaPoSatu)).
Metodu void ispisiPodatke() koja ispisuje podatke o zaposleniku i njegovoj ukupnoj plati.
.*/

class Zaposlenici
{
	string ime, prezime;
	float plata;
	int radniSat;
	float cijenaPoSatu;
	
	public:
		
		Zaposlenici()
		{
		};
		
		Zaposlenici(string i, string p, float pl, int r, float c)
		{
			ime=i;
			prezime=p;
			plata = pl;
			radniSat = r;
			cijenaPoSatu = c;
		}
		
		float izracunajPlatu()
		{
			return (plata + (radniSat * cijenaPoSatu));
		}
		
		friend ostream & operator << ( ostream &out,const Zaposlenici &z)
		{
			cout<<"Ime "<<z.ime<<" prezime "<<z.prezime<<" plata "<<z.plata<<" radni sat "<<z.radniSat<<" cijena po satu "<<z.cijenaPoSatu<<endl;
			return out;
		}
		
		friend istream & operator >> (istream &in, Zaposlenici &z) //Nema const kod >>
		{
			cout<<"Unesite ime ";
			in >> z.ime;
			cout<<endl<<"Unesite prezime ";
			in>>z.prezime;
			cout<<endl<<"Unesite platu ";
			in>>z.plata;
			cout<<endl<<"Unesi vrijednost radnog sata ";
			in>>z.radniSat;
			cout<<endl<<"Unesite cijenu radnog sata ";
			in>>z.cijenaPoSatu;
			return in;
			
		}
		
		Zaposlenici& operator = (Zaposlenici &d) //Kod operatora = nam ne treba vratiti novi objekat nego promijeniti onaj sa olijeve strane
		{
			this->ime =d.ime;
			this->prezime=d.prezime;
			this->plata=d.plata;
			this->radniSat=d.radniSat;
			this->cijenaPoSatu=d.cijenaPoSatu;
			return *this;
		}
		
		bool operator > (Zaposlenici &d)
		{
			if(this->plata > d.plata)
			{
				return true;
			}
			
			else
			{
				return false;
			}
		}
};

#endif
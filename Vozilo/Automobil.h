#ifndef AUTOMOBIL_H
#define AUTOMOBIL_H
#include "Vozilo.h"

/*Automobil: Klasa izvedena iz Vozilo.
Funkcija ispis() treba ispisati informacije o automobilu, uključujući marku, kapacitet i specifičnu informaciju da je vozilo tipa "Automobil".
*/

class Automobil:public Vozilo
{
	public:
		
		Automobil(int k, string m): Vozilo(k, m){
		};
		
		void ispis()
		{
			cout<<"Kapacitet"<<getKapacitet()<<" model"<<getModel()<<" tip vozila "<<" automobil"<<endl;
		}
		
	protected:

};

#endif
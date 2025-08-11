#ifndef BICIKLO_H
#define BICIKLO_H
#include "Vozilo.h"

class Biciklo:public Vozilo
{
	public:
		
		Biciklo(int k, string m): Vozilo(k,m){
		};
		
		void ispis()
		{
			cout<<"Model "<<getModel()<<" kapacitet "<<getKapacitet()<<" vozilo je: biciklo"<<endl;
		}
		
	protected:
};

#endif
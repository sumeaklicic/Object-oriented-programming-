#ifndef VOZILO_H
#define VOZILO_H
#include <iostream>
using namespace std;

class Vozilo
{
	public:
		
		Vozilo(int k, string m): kapacitet(k), model(m){};
		
		virtual void ispis()=0;
		
		int getKapacitet()
		{
			return kapacitet;
		}
		
		string getModel()
		{
			return model;
		}
		
	protected:
		
		int kapacitet;
		string model;
};

#endif
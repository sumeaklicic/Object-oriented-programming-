#include <iostream>
#include "Setget.h"


/*Napraviti klasu automobil sa parametrima 
string model, marka
int godiste
U mainu treba moci promijeniti godiste automobila i dobiti model automobila*/


int main() {
	
	Setget auto1{"q7", "audi", 2005};
	auto1.ispisiinformacije();
	auto1.setGodiste(2009);
	string modelauta= auto1.getModel();
	cout<<"Model auta iz geta je "<<modelauta<<endl;
	auto1.ispisiinformacije();
	return 0;
}
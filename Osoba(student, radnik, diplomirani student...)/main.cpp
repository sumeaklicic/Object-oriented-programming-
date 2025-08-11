#include <iostream>
#include "Student.h"
#include "Radnik.h"
#include "DiplStudent.h"
/*Odraditi zadatak na osnovu klasnog dijagrama */

int main() {
	
	Student elektro("Sumea", "Klicic", 201104, 1285);
	elektro.ispis();
	cout<<endl;
	Radnik cistac("Hana", "Hanic", 130456, "cistacica");
	cistac.ispis();
	cout<<endl;
	DiplStudent dipl("Belma", "Belmic", 12122045, 1234, "14,12,2017");
	dipl.ispis();
	cout<<endl;
	return 0;
}
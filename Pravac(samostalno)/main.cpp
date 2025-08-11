#include <iostream>
#include "Pravac.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	//Provjera funckija za tacku
	Tacka prva(6,9);
	Tacka druga(12,3);
	prva.ispisKordinata();
	cout<<"Udaljenost prve od X ose: "<<prva.udaljenostodXose()<<endl;
	cout<<"Udaljenost druge od Y ose: "<<druga.udaljenostodYose()<<endl;
	cout<<"Udaljenost izmedu tacaka: "<<prva.udaljenostIzmeduDvijeTacke(druga)<<endl;
	
	//Provjera funkcija za pravac
	Pravac prvi(5,9);
	Pravac drugi(5,8);
	prvi.presjekDvaPravca(drugi);
	
	if(prvi.paralelnostPravaca(drugi)==true)
	{
		cout<<"Pravci su paralelni "<<endl;
	}
	else
	{
		cout<<"Pravci nisu paralelni "<<endl;
	}
	
	cout<<endl<<"Presjek y osom "<<prvi.presjeksaYosom()<<endl;
	
	if(prvi.tackaNaPravcu(druga)!=false)
	{
		cout<<"Jeste na pravcu"<<endl;
	}
	else
	{
		cout<<"Tacka nije na pravcu "<<endl;
	}
	return 0;
}
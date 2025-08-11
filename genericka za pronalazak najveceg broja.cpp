 /*mplementiraj generičku funkciju findMax koja prima niz elemenata i veličinu niza.
Funkcija treba vratiti maksimalni element iz niza.
Testiraj funkciju s različitim tipovima podataka*/

#include <iostream>
using namespace std;

template <typename T>
T vratiNajveci(T niz[], int duzina)
{
	T max= niz[0];
	for(int i=0; i<duzina; i++)
	{
		if(niz[i]> max)
		{
			max=niz[i];
		}
	}
	
	return max;
	
}

int main()
{
	int niz[3]={3,6,1};
	float nn[3]={12.3, 8.9, 3.4};
	
	cout<<"Najveci element u nizu niz "<<vratiNajveci(niz,3)<<endl;
	cout<<"Najveci element u nizu nn "<<vratiNajveci(nn, 3);
}
/* Napiši šablonsku funkciju koja pronalazi minimalni i maksimalni element u nizu, zajedno sa njihovim indeksima.*/

#include <iostream>
using namespace std;

template <class T>
void pronalazak(T niz[], int duzina)
{
	int poznajveceg;
	int poznajmanjeg;
	
	T max=niz[0];
	T min = niz[0];
	for(int i=0; i<duzina; i++)
	{
		if(niz[i]>max)
		{
			max=niz[i];
			poznajveceg=i;
		}
		
		if(niz[i]<min)
		{
			min=niz[i];
			poznajmanjeg=i;
		}
		
	}
	
	cout<<"Najveci broj je "<<max<<" na poziciji "<<poznajveceg<<" dok je najmanji "<<min<<" na poziciji "<<poznajmanjeg;
}

int main()
{
	int niz[5]={1,2,3,4,5};
	pronalazak(niz, 5);
}
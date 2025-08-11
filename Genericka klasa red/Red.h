#ifndef RED_H
#define RED_H
#include <iostream>
using namespace std;


template <class T>
class Red
{
	int duzina;
	T niz[20];
	int element;
	
	public:
		
		Red()
		{
			duzina=0;
			element=-1;
		}
		
		void dodajElement (T broj)
		{
			if(element==-1)
			{
				cout<<"Unosimo prvi element u red "<<broj;
				element++;
				
				if(element >(20-1))
				{
					cout<<"Red je pun "<<endl;
					return;
				}
				
				else
				{
				niz[element]=broj;
				duzina++;
				}
				
			}
			
			else
			{
				cout<<"Unosimo naredni broj u red "<< broj;
				element++;
				
				if(element >(20-1))
				{
					cout<<"Red je pun "<<endl;
					return;
				}
				
				else
				{
					niz[element]=broj;
					duzina++;
				}				
			}
			
		}
		
		T izbaciElement()
		{
			T br;
			
			if(element != (-1))
			{
			cout<<"Izbacujemo prvi element iz reda a to je "<<niz[0];
			
			br = niz[0];
			
			for(int i=0; i<duzina; i++)
			{
				niz[i]=niz[i+1];
			}
			}
			
			duzina--;
			element--;			
			
			return br;
		}
		
		void ispis()
		{
			for(int i=0; i<=element; i++)
			{
				cout<<niz[i]<<" ";
			}
			cout<<endl;
		}
	protected:
};

#endif
#include <iostream>
#include "Trokut.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int a, b,c;
	cout<<"Unesite stranice trokuta "<<endl;
	cin>>a>>b>>c;
	while( (a+b < c) ||(a+c <b) || (b+c)< a)
	{
		cout<<"Ne mozemo napraviti stranicu pokusajte opet unijeti stranice "<<endl;
		cin>>a>>b>>c;
	}
	
	Trokut trokut(a,b,c);
	float p = trokut.povrsina();
	int o= trokut.obim();
	cout<<"Povrsina trokuta sa unijetim stranicama "<<p<<endl
		<<"Obim trokuta sa unijetim stranicama "<<o<<endl;
	
	return 0;
}
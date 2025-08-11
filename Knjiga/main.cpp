#include <iostream>
#include "Knjiga.h"


int main() {
	
	Knjiga prva;
	Knjiga druga;
	cin>>prva;
	cin>>druga;
	
	if (prva==druga)
	{
		cout<<"Knjige su iste"<<endl;
	}
	
	else
	{
		cout<<"Nisu knjige iste"<<endl;
	}
	
	if(prva<druga)
	{
		cout<<"Prva knjiga ima manje stranica "<<endl;
	}
	
	else
	{
		cout<<"Druga knjiga ima manje stranica"<<endl;
	}
	
	cout<<prva;
	cout<<druga;
	
	return 0;
}
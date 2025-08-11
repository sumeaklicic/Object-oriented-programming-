#include <iostream>
#include "KompBroj.h"
#include <stdexcept>

int main() {
	
	try
	{
		
	KompBroj prvi;
	KompBroj drugi;
	cin>>prvi;
	cin>>drugi;
	
	KompBroj treci = prvi+drugi;
	cout<<treci;
	
	}
	
	catch(std::exception &e)
	{
		std:: cerr<<e.what();
	}
	return 0;
}
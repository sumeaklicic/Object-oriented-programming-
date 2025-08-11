#include <iostream>
#include "Stack.h"

/* Napraviti šablonsku klasu Stack koja omogućava rad s bilo kojim tipom podataka. Klasa treba imati:

Metode za dodavanje (push), uklanjanje (pop), i dohvaćanje vrha stoga (top).
Provjeru je li stog prazan.
Testiraj klasu s cijelim brojevima i stringovima.*/

int main() {
	
	Stack <int> stack1; //Ime klase, pa u dijamantnu strukturu tip podataka pa ime varijable
	
	stack1.push(3);
	stack1.push(8);
	
	if(stack1.prazan())
	{
		cout<<"Stack je prazan"<<endl;
	}
	
	else
	{
		cout<<"Stack nije prazan"<<endl;
	}
		
	stack1.push(12);
	stack1.ispis();
	stack1.pop();
	stack1.pop();
	stack1.pop();
	
	if(stack1.prazan())
	{
		cout<<"Stack je prazan"<<endl;
	}
	
	else
	{
		cout<<"Stack nije prazan"<<endl;
	}
	return 0;
}
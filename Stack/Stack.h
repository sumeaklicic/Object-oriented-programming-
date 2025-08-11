#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;

/* Napraviti šablonsku klasu Stack koja omogućava rad s bilo kojim tipom podataka. Klasa treba imati:

Metode za dodavanje (push), uklanjanje (pop), i dohvaćanje vrha stoga (top).
Provjeru je li stog prazan.
Testiraj klasu s cijelim brojevima i stringovima.*/


template <class T, int maxvelicina =10>
class Stack
{
	int top;
	T niz[maxvelicina];
	
	public:
		
		//Konstruktor ne treba jer se koristi podrazumijevani
		Stack()
		{
			top=-1;
		}
		
		void push(T element)
		{
			top++;
			niz[top]=element;
		}
		
		T pop()
		{
			T element = niz[top];
			top--;
			return element;
		}
		
		void topelement()
		{
			if(top!=(-1))
			{
			cout<<"Top element je "<<niz[top];
			}
			
			else
			{
				cout<<"Stack je prazan"<<endl;
			}
		}
		
		bool prazan()
		{
			if(top==(-1))
			{
				return true;
			}
			
			else
			{
				return false;
			}
		}
		
		void ispis()
		{
			cout<<"Ispis stacka: "<<endl;
			for(int i=0; i<=top; i++)
			{
				cout<<niz[i]<<" ";
			}
			
			cout<<endl;
		}
		
		
	protected:
};

#endif
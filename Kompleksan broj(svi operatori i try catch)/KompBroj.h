#ifndef KOMPBROJ_H
#define KOMPBROJ_H
#include <iostream>
using namespace std;

/* Klasa treba podržavati sljedeće:

Operator >> za unos kompleksnog broja u formatu a b (realni i imaginarni dio).
Operator << za ispis kompleksnog broja u formatu a + bi.
Operator + za zbrajanje dva kompleksna broja.
Operator = za dodjelu jednog kompleksnog broja drugom.
Operator == za usporedbu dva kompleksna broja.
Koristi try-catch za hvatanje grešaka prilikom unosa i operacija (npr. nevalidan unos).
*/

class KompBroj
{
	
	int realni, imaginarni;
	
	public:
		
		KompBroj(int r, int i)
		{
			imaginarni = i;
			realni = r;
		}
		
		
		KompBroj()
		{
		};
	
		
		friend ostream& operator <<(ostream &out, const KompBroj &b)
		{
			out<<"Kompleksni broj "<<b.realni<<" + "<<b.imaginarni<<"i"<<endl;
			return out;
		}
		
		
		friend istream & operator >> (istream &in, KompBroj &b)
		{
			cout<<"Unesite realni dio ";
			in>>b.realni;
			cout<<endl<<"Unesite imaginarni dio ";
			in>>b.imaginarni;
			
			if(b.imaginarni> b.realni) throw invalid_argument ("Ne moze imaginarni dio biti veci");
			
			else
			{
				return in;
			}
			
		}
		
		
		KompBroj operator + (KompBroj &b)
		{
			KompBroj novi;
			novi.realni = this->realni + b.realni;
			novi.imaginarni = this->imaginarni + b.imaginarni;
			return novi;
		}
		
		
		KompBroj & operator = (KompBroj &b)
		{
			this->realni = b.realni;
			this->imaginarni = b.imaginarni;
			return *this;
		}
		
		
		bool operator == (KompBroj &b)
		{
			if(( this->realni == b.realni)&&(this->imaginarni == b.imaginarni))
			{
				return true;
			}
			
			else
			{
				return false;
			}
		}

};		



#endif
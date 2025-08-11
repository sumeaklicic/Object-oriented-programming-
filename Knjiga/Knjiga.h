#ifndef KNJIGA_H
#define KNJIGA_H
#include <iostream>
using namespace std;

/*Napravi klasu Knjiga sa atributima naslov, autor, broj stranica i godina izdanja. Implementiraj:
Konstruktor za inicijalizaciju podataka.
Preopterećen operator < za poređenje dve knjige po broju stranica.
Preopterećen operator == za proveru da li su dve knjige iste (naslov i autor).
Preopterećen operator << za ispis podataka o knjizi. */


class Knjiga
{
	string naslov;
	string autor;
	int broj_stranica;
	int godina;
	
	public:
		
		Knjiga(){
		};
	
		Knjiga(string n, string a, int br, int g)
		{
			naslov=n;
			autor=a;
			broj_stranica = br;
			godina=g;
		}
		
		bool operator < (Knjiga &druga)
		{
			if(this->broj_stranica < druga.broj_stranica)
			{
				return true;
			}
			
			if( (this->broj_stranica == druga.broj_stranica) || (this->broj_stranica >druga.broj_stranica))
			{
				return false;
			}
		}
		
		bool operator == (Knjiga &druga)
		{
			if( (this->autor == druga.autor) && (this->naslov == druga.naslov))
			{
				return true;
			}
			
			else
			{
				return false;
			}
		}
		
		friend ostream& operator<< (ostream&out,const Knjiga &k)
		{
			cout<<"Autor "<<k.autor<<" Naslov "<<k.naslov<<" Broj stranica "<<k.broj_stranica<<" Godina izdanja "<<k.godina<<endl;
			return out;
		}
		
		friend istream & operator>>(istream &in, Knjiga &k) //Ne smije biti const kod knjige
		{
			cout<<"Unesite autora ";
			in>>k.autor;
			cout<<endl<<"Unesite naslov "; 
			in>>k.naslov;
			cout<<endl<<" Unesite broj stranica "; 
			in>>k.broj_stranica;
			cout<<endl<<"Unesite godinu izdanja "; 
			in>>k.godina;
			return in;
		}
};

#endif
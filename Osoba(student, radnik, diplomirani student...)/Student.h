#ifndef STUDENT_H
#define STUDENT_H
#include "Osoba.h"

class Student:public Osoba
{
	public:
		
		Student(string i, string p, int br, int in): Osoba(i,p, br), brIndexa(in){};
		
		void ispis()
		{
			Osoba::ispis();
			cout<<" broj indexa "<<brIndexa;
		}
		
	protected:
		
		int brIndexa;
		
};

#endif
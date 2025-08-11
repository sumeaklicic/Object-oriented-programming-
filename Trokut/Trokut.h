#ifndef TROKUT_H
#define TROKUT_H
#include <iostream>
#include <cmath>
using namespace std;

class Trokut
{
	int a, b,c; //Stranice trokuta
	
	public:
		
		Trokut()
		{
			a=0;
			b=0;
			c=0;
		}
		
		
		Trokut(int prva, int druga, int treca)
		{
			a=prva;
			b=druga;
			c=treca;
		}
		
		
		float povrsina()
		{
			float s= (a+b+c)/2.0 ;
			float povrsina = sqrt(s*(s-a)*(s-b)*(s-c));
			return povrsina;
		}
		
		
		int obim()
		{
			return a+b+c;
		}
		
		
		void ispisStranica()
		{
			cout<<"Stranice trougla su: "
				<<a<<" "<<b<<" "<<c<<endl;
		}
		
};

#endif
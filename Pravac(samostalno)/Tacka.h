#ifndef TACKA_H
#define TACKA_H
#include <cmath>
#include <iostream>
using namespace std;


class Tacka
{
	int x;
	int y;
	
	public:
	
	Tacka()
	{
		x=0;
		y=0;
	}
	
	
	Tacka(int _x, int _y)
	{
		x=_x;
		y=_y;
	}
	
	
	void ispisKordinata()
	{
		cout<<"Tacka ima koordinate ("<<x<<","<<y<<")"<<endl;
	}
	
	
	float udaljenostodXose()
	{
		return abs(y);  //Apsolutna vrijednost y ose
	}
	
	
	float udaljenostodYose()
	{
		return abs(x); //Apsolutna vrijednost x ose
	}
	
	
	float udaljenostIzmeduDvijeTacke(Tacka t1)
	{
		return sqrt((t1.x- this->x)*(t1.x- this->x) + (t1.y-this->y)*(t1.y-this->y));
	}
	
	
	float getX()
	{
		return x;
	}
	
	
	float getY()
	{
		return y;
	}
	
	
	
};

#endif
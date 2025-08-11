#ifndef SETGET_H
#define SETGET_H
#include <iostream>
using namespace std;

class Setget
{
	string model;
	string marka;
	int godiste;
	
	public:
		
		Setget()
		{
			godiste=0;
		}
	
		Setget(string m, string ma, int g)
		{
			model=m;
			marka=ma;
			godiste=g;
		}
		
		void ispisiinformacije()
		{
			cout<<"Model "<<model<<endl
				<<"Marka "<<marka<<endl
				<<"Godiste "<<godiste<<endl;
		}
		
		void setGodiste(int god)
		{
			godiste=god;
		}
		
		string getModel()
		{
			return model;
		}
		
};

#endif
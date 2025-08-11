#ifndef PRAVAC_H
#define PRAVAC_H
#include "Tacka.h"

class Pravac
{
	int k, l;
	
	public:
		
		Pravac()
		{
			k=0;
			l=0;
		}
		
		Pravac(int ka, int el)
		{
			k=ka;
			l=el;
		}
		
		
		bool paralelnostPravaca(Pravac drugi)
		{
			if(k==drugi.k)
			{
				return true;
			}
			
			else
			{
				return false;
			}
		}
		
		
		bool okomitostPravaca(Pravac drugi)
		{
			if(k*drugi.k == -1)
			{
				return true;
			}
			
			else
			{
				return false;
			}
		}
		
		
		bool tackaNaPravcu(Tacka t1)
		{
			if(t1.getY() == k*t1.getX() +1) //Znaci da koordinate te tacke trebaju zadovoljiti jednacinu pravca
			{
				return true;
			}
			
			else
			{
				return false;
			}
		}

		
		float presjeksaYosom()
		{
			return l; //Jer je tu x=0
		}
		
		
		float presjeksaXosom()
		{
			if(k!=0)
			{
				return -l/k;
			}
			
			else
			{
				cout<<"Paralelni su"<<endl;
				return 0;	
			}
		}
		
		
		void presjekDvaPravca(Pravac drugi)
		{
			float xnovo;
			float ynovo;
			
			xnovo= drugi.l - this->l / this->k - drugi.k;
			ynovo= k*xnovo +l;
			
			cout<<"Kordinate tacke su ("<<xnovo<<","<<ynovo<<")"<<endl; //Ne mogu izbaciti tacku jer nemam definisan operator =
		
			}
		
};

#endif
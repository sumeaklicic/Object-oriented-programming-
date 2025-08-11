#ifndef AUTO_H
#define AUTO_H
#include <iostream>
using namespace std;

class Auto
{
    int godiste;
    string model;
    string marka;
    int brauta;
    
public:
    // Podrazumevani konstruktor
    Auto() : godiste(0), brauta(0) {}

    // Konstruktor sa argumentima
    Auto(string m, string ma, int g, int b)
        : marka(ma), model(m), godiste(g), brauta(b) {}

    // Operator dodele
    Auto& operator=(const Auto& a)
    {
    	this->marka = a.marka;
		this->model=a.model;
		this->brauta=a.brauta;
		this->godiste=a.godiste;  
      
    
        return *this;
    }

    // Operator sabiranja
Auto operator+(const Auto& a)
{
    Auto rezultat;  // Kreiramo prazan objekat Auto
    
    // Sabiranje broja automobila
    rezultat.brauta = this->brauta + a.brauta;
    
    // Sabiranje godina, ako želite minimalnu godinu, koristite min()
    rezultat.godiste = this->godiste + a.godiste;  // Ako želite da sabirate godine, ovako je u redu
    
    // Spajanje marki i modela
    rezultat.marka = this->marka + " i " + a.marka;  // Spajanje marki
    rezultat.model = this->model + " + " + a.model;  // Spajanje modela
    
    return rezultat;  // Vraćamo novi objekat Auto
}


    // Ispisivanje informacija o automobilu
    void ispis() const
    {
        cout << "Marka: " << marka << endl
             << "Model: " << model << endl
             << "Godiste: " << godiste << endl
             << "Broj auta: " << brauta << endl;
    }
};

#endif

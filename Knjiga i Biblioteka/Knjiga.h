
/*Klasa Knjiga
Atributi:
naslov (string)
autor (string)
godinaIzdanja (int)
dostupna (bool) – da li je knjiga dostupna za pozajmljivanje
Metode:
prikaziDetalje() - Prikazuje informacije o knjizi.
pozajmi() - Postavlja atribut dostupna na false (ako je dostupna).
vrati() - Postavlja atribut dostupna na true.*/

#ifndef KNJIGA_H
#define KNJIGA_H

#include <iostream>
using namespace std;

class Knjiga {
public:
    string naslov;
    string autor;
    int godinaIzdanja;
    bool dostupna;

 	Knjiga() : naslov(""), autor(""), godinaIzdanja(0), dostupna(true) {} //Obavezan je defoltni konstruktor u svim headerfile-ovima
 
    Knjiga(string n, string a, int g, bool d) {
        naslov = n;
        autor = a;
        godinaIzdanja = g;
        dostupna = d;
    }

    void prikaziDetalje() {
        cout << "Prikaz detalja o knjizi:" << endl;
        cout << "Naslov: " << naslov << endl
             << "Autor: " << autor << endl
             << "Godina izdanja: " << godinaIzdanja << endl
             << "Dostupna: " << (dostupna ? "Da" : "Ne") << endl;
    }

    void pozajmi() {
        if (dostupna) {
            cout << "Knjiga ste uspješno pozajmili." << endl;
            dostupna = false;
        } else {
            cout << "Knjiga trenutno nije dostupna." << endl;
        }
    }

    void vrati() {
        if (!dostupna) {
            cout << "Uspješno ste vratili knjigu." << endl;
            dostupna = true;
        } else {
            cout << "Knjiga je već dostupna." << endl;
        }
    }
};

#endif

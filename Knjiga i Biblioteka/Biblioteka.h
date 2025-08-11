

/*Klasa Biblioteka
Atributi:
knjige (niz ili vektor knjiga)
brojKnjiga (int)
Metode:
dodajKnjigu(Knjiga k) - Dodaje novu knjigu u biblioteku.
prikaziKnjige() - Prikazuje sve knjige u biblioteci.
pozajmiKnjigu(string naslov) - Pozajmljuje knjigu sa datim naslovom (poziva metodu pozajmi() iz klase Knjiga).
*/

#ifndef BIBLIOTEKA_H
#define BIBLIOTEKA_H

#include "Knjiga.h"

const int maxvel = 20;

class Biblioteka {
    Knjiga knjige[maxvel];
    int brojKnjiga;

public:
    Biblioteka() : brojKnjiga(0) {} //Obavezan defoltni konstruktor

    void dodajKnjigu(Knjiga k1) {
        if (brojKnjiga < maxvel) {
            knjige[brojKnjiga] = k1;
            brojKnjiga++;
        } else {
            cout << "Nema više mesta u biblioteci!" << endl;
        }
    }

    void prikaziKnjige() {
        cout << "Prikaz svih knjiga iz biblioteke:" << endl;
        for (int i = 0; i < brojKnjiga; i++) {
            cout << "Naslov: " << knjige[i].naslov << endl
                 << "Autor: " << knjige[i].autor << endl
                 << "Godina izdanja: " << knjige[i].godinaIzdanja << endl
                 << "Dostupna: " << (knjige[i].dostupna ? "Da" : "Ne") << endl;
        }
    }
};

#endif

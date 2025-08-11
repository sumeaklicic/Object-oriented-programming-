#include <iostream>
#include "Biblioteka.h"

/*Napravi dve klase: Knjiga i Biblioteka. Klasa Knjiga treba da predstavlja knjige, dok klasa Biblioteka treba da sadrži kolekciju knjiga.
Klasa Knjiga
Atributi:
naslov (string)
autor (string)
godinaIzdanja (int)
dostupna (bool) – da li je knjiga dostupna za pozajmljivanje
Metode:
prikaziDetalje() - Prikazuje informacije o knjizi.
pozajmi() - Postavlja atribut dostupna na false (ako je dostupna).
vrati() - Postavlja atribut dostupna na true.
Klasa Biblioteka
Atributi:
knjige (niz ili vektor knjiga)
brojKnjiga (int)
Metode:
dodajKnjigu(Knjiga k) - Dodaje novu knjigu u biblioteku.
prikaziKnjige() - Prikazuje sve knjige u biblioteci.
pozajmiKnjigu(string naslov) - Pozajmljuje knjigu sa datim naslovom (poziva metodu pozajmi() iz klase Knjiga).
*/

#include "knjiga.h"
#include "biblioteka.h"

int main() {
    Knjiga knjiga1{"MiM", "Bulgakov", 1987, true};
    Knjiga knjiga2{"ZiK", "Tolstoj", 1912, false};

    knjiga1.prikaziDetalje();
    knjiga1.pozajmi();
    knjiga1.vrati();

    Biblioteka bibl;
    bibl.dodajKnjigu(knjiga1);
    bibl.dodajKnjigu(knjiga2);
    bibl.prikaziKnjige();    
    return 0;
}

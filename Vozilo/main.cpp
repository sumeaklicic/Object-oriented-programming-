#include <iostream>
#include "Automobil.h"
#include "Biciklo.h"
/* Napiši program koji koristi objektno orijentisano programiranje za modeliranje vozila. Trebaš kreirati sljedeće klase i implementirati njihovu funkcionalnost:

Klasa Vozilo:

Apstraktna klasa koja sadrži potpuno virtualnu funkciju ispis().
Osnovna klasa Vozilo treba imati konstruktor koji prima marku vozila kao string i kapacitet vozila kao int.
Sadrži metode getMarka() i getKapacitet(), koje vraćaju vrijednosti marke i kapaciteta.
Izvedene klase:

Automobil: Klasa izvedena iz Vozilo.
Funkcija ispis() treba ispisati informacije o automobilu, uključujući marku, kapacitet i specifičnu informaciju da je vozilo tipa "Automobil".
Bicikl: Klasa izvedena iz Vozilo.
Funkcija ispis() treba ispisati informacije o biciklu, uključujući marku, kapacitet (koji će za bicikl uvijek biti 1) i informaciju da je vozilo tipa "Bicikl".
Glavna funkcija (main):

Kreiraj niz pokazivača na Vozilo sa minimalno 3 različita vozila (jedan Automobil, jedan Motor, jedan Bicikl).
Pozovi funkciju ispis() za svako vozilo koristeći polimorfizam.
Oslobodi memoriju za sve kreirane objekte.
*/

void zajednickiIspis(Vozilo &v)
{
	v.ispis();
}

int main() {
	Automobil jedan(123, "polo");
	jedan.ispis();
	Biciklo dva(456, "qw2");
	zajednickiIspis(dva);
	
	return 0;
}
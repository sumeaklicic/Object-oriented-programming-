#include <iostream>
#include "Auto.h"

int main() {
    // Kreiranje objekata a1 i a2
    Auto a1{"audi", "q7", 1998, 1};
    Auto a2{"polo", "novi", 2006, 2};
    
    // Ispisivanje informacija o automobilima
    cout << "Informacija o autu a1:" << endl;
    a1.ispis();
    cout << "Informacija o autu a2:" << endl;
    a2.ispis();
    
    // Testiranje operatora sabiranja (a1 + a2)
    Auto a3 = a1 + a2;
    cout << "Novo auto a3 nakon sabiranja:" << endl;
    a3.ispis();
    
    a2=a1;
    cout<<"Auto nakon izjednacavanja "<<endl;
    a2.ispis();

    return 0;
}

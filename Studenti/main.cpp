
#include <iostream>
#include "Student.h"

int main() {
	
    Student prvi("Sumea", "Klicic", 1234);
    prvi.dodajocjenu(5);
    prvi.dodajocjenu(8);

    cout << "Prosjek studenta: " << prvi.prosjek() << endl;

    Student drugi("Hana", "Hanic", 6789);

    if (prvi == drugi) {
        cout << drugi << endl;
    } else {
        cout << prvi << endl;
    }

    return 0;
}

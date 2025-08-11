#include "Razlomak.h"


int main() {
    try {
        Razlomak prvi, drugi;

        cout << "Unesi prvi razlomak (brojnik nazivnik): ";
        cin >> prvi;

        cout << "Unesi drugi razlomak (brojnik nazivnik): ";
        cin >> drugi;

        Razlomak treci = prvi + drugi;
        cout << "Zbir: " << treci << endl;

        Razlomak cetvrti = prvi * drugi;
        cout << "Proizvod: " << cetvrti << endl;

        Razlomak peti = prvi / drugi;
        cout << "Kolicnik: " << peti << endl;
    }
    catch (const exception &e) {
        cerr << "Greska: " << e.what() << endl;
    }

    return 0;
}

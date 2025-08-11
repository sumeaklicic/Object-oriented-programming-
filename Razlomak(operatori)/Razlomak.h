#ifndef RAZLOMAK_H
#define RAZLOMAK_H

#include <iostream>
#include <stdexcept>
using namespace std;

class Razlomak {
    int brojnik, nazivnik;

    int nzd(int a, int b) const {
        return b == 0 ? a : nzd(b, a % b);
    }

    void skracivanje() {
        int delilac = nzd(brojnik, nazivnik);
        brojnik /= delilac;
        nazivnik /= delilac;
    }

public:
    Razlomak(int b = 0, int n = 1) {
        if (n == 0) throw invalid_argument("Nazivnik ne sme biti 0");
        brojnik = b;
        nazivnik = n;
        skracivanje();
    }

    friend istream& operator >> (istream &in, Razlomak &r) {
        in >> r.brojnik >> r.nazivnik;
        if (r.nazivnik == 0) throw invalid_argument("Nazivnik ne sme biti 0");
        r.skracivanje();
        return in;
    }

    friend ostream& operator << (ostream &out, const Razlomak &r) {
        out << r.brojnik << "/" << r.nazivnik;
        return out;
    }

    Razlomak operator + (const Razlomak &r) const {
        Razlomak novi(brojnik * r.nazivnik + r.brojnik * nazivnik, nazivnik * r.nazivnik);
        novi.skracivanje();
        return novi;
    }

    Razlomak operator * (const Razlomak &r) const {
        Razlomak novi(brojnik * r.brojnik, nazivnik * r.nazivnik);
        novi.skracivanje();
        return novi;
    }

    Razlomak operator / (const Razlomak &r) const {
        if (r.brojnik == 0) throw invalid_argument("Deljenje sa nulom");
        Razlomak novi(brojnik * r.nazivnik, nazivnik * r.brojnik);
        novi.skracivanje();
        return novi;
    }
};

#endif

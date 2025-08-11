#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
using namespace std;

class Student {
    string ime;
    string prezime;
    int broj_indexa;
    int duzina = 10;
    int pozicija = 0;
    int* ocjene = new int[duzina];

public:
    Student(string i, string p, int br)
        : ime(i), prezime(p), broj_indexa(br) {}

    ~Student() {
        delete[] ocjene;
    }

    void dodajocjenu(int broj) {
        if (broj >= 5 && broj <= 10) {
            if (pozicija < duzina) {
                ocjene[pozicija] = broj;
                pozicija++;
            } else {
                cout << "Niz ocjena je popunjen." << endl;
            }
        } else {
            cout << "Ocjena nije u odgovarajucem opsegu." << endl;
        }
    }

    float prosjek() const {
        if (pozicija == 0) return 0; // Izbegni deljenje sa nulom
        int suma = 0;
        for (int i = 0; i < pozicija; i++) {
            suma += ocjene[i];
        }
        return static_cast<float>(suma) / pozicija;
    }

    bool operator==(const Student& drugi) const {
        return broj_indexa == drugi.broj_indexa;
    }

    friend ostream& operator<<(ostream& out, const Student& s) {
        out << "Ime i prezime: " << s.ime << " " << s.prezime
            << ", Index: " << s.broj_indexa << ", Ocjene: ";
        for (int i = 0; i < s.pozicija; i++) {
            out << s.ocjene[i] << " ";
        }
        return out;
    }
};

#endif

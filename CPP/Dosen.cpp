#include <iostream>
#include <string>
#include "Civitas.cpp"

using namespace std;

class Dosen : public Civitas {
    // attribute
    string nip, pendTerakhir, keahlian;

    // constructor
    public:
        Dosen() {
            this->nip = "";
            this->pendTerakhir = "";
            this->keahlian = "";
        }

        Dosen(string nip, string pendTerakhir, string keahlian) {
            this->nip = nip;
            this->pendTerakhir = pendTerakhir;
            this->keahlian = keahlian;
        }

        // getter and setter
        string getNip() { return this->nip; }
        string getPendTerakhir() { return this->pendTerakhir;}
        string getKeahlian() { return this->keahlian; }

        void setNip(string nip) { this->nip = nip;}
        void setPendTerakhir(string pendTerakhir) { this->pendTerakhir = pendTerakhir;}
        void setKeahlian(string keahlian) { this->keahlian = keahlian;}

        // method
        void ngajar() {
            cout << "tutor dek" << endl;
        }

        void printDosen() {
            printCivitas();
            cout << "NIP : " << this->nip << endl;
            cout << "Pend Terakhir : " << this->pendTerakhir << endl;
            cout << "Keahlian : " << this->keahlian << endl;
        }

        // destruktor
        ~Dosen() {}
};
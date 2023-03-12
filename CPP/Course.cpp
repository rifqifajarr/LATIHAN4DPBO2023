#include <iostream>
#include <string>

using namespace std;

class Course {
    // attribute
    string namaMK, kodeMK, jumlahSKS;

    // constructor
    public:
        Course() {
            this->namaMK = "";
            this->kodeMK = "";
            this->jumlahSKS = "";
        }

        Course(string namaMK, string kodeMK, string jumlahSKS) {
            this->namaMK = namaMK;
            this->kodeMK = kodeMK;
            this->jumlahSKS = jumlahSKS;
        }

        // getter and setter
        string getNamaMK() {
            return this->namaMK;
        }
        string getKodeMK() {
            return this->kodeMK;
        }
        string getJumlahSKS() {
            return this->jumlahSKS;
        }

        void setNamaMK(string namaMK) {
            this->namaMK = namaMK;
        }
        void setKodeMK(string kodeMK) {
            this->kodeMK = kodeMK;
        }
        void setJumlahSKS(string jumlahSKS) {
            this->jumlahSKS = jumlahSKS;
        }

        // method
        void printMK() {
            cout << "Nama MK : " << this->namaMK << endl;
            cout << "Kode MK : " << this->kodeMK << endl;
            cout << "Jumlah SKS : " << this->jumlahSKS << endl;
        }

        // destructor
        ~Course() {}
};
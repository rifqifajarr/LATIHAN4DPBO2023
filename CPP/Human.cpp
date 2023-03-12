#include <iostream>
#include <string>

using namespace std;

class Human {
    // attribute
    private:
        string nik, nama, jenisKelamin;
    
    // constructor
    public:
    Human() {
        this->nik = "";
        this->nama = "";
        this->jenisKelamin = "";
    }

    Human(string nik, string nama, string jenisKelamin) {
        this->nik = nik;
        this->nama = nama;
        this->jenisKelamin = jenisKelamin;
    }

    // getter and setter
    string getNik() {
        return this->nik;
    }

    string getNama() {
        return this->nama;
    }

    string getJenisKelamin() {
        return this->jenisKelamin;
    }

    void setNik(string nik) {
        this->nik = nik;
    }

    void setNama(string nama) {
        this->nama = nama;
    }

    void setJenisKelamin(string jenisKelamin) {
        this->jenisKelamin = jenisKelamin;
    }

    // method
    void makan() {
        cout << "oke mangan.." << endl;
    }

    void printHuman() {
        cout << "NIK : " << this->nik << endl;
        cout << "Nama : " << this->nama << endl;
        cout << "Jenis Kelamin : " << this->jenisKelamin << endl;
    }

    // destructor
    ~Human() {}
};

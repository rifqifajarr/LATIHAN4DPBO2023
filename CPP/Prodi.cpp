#include <bits/stdc++.h>
#include "Mhs.cpp"
#include "Dosen.cpp"
#include "Course.cpp"

using namespace std;

class Prodi {
    // attribute
    string namaProdi, kode, fakultas;
    vector<Dosen> LDosen;
    vector<Mhs> LMhs;
    vector<Course> LCourse;
    
    // constructor
    public:
    Prodi() {
        this->namaProdi = "";
        this->kode = "";
        this->fakultas = "";
    }

    Prodi(string namaProdi, string kode, string fakultas) {
        this->namaProdi = namaProdi;
        this->kode = kode;
        this->fakultas = fakultas;
    }

    // setter and getter
    void setNamaProdi(string namaProdi) {
        this->namaProdi = namaProdi;
    }
    void setKode(string kode) {
        this->kode = kode;
    }
    void setFakultas(string fakultas) {
        this->fakultas = fakultas;
    }

    string getNamaProdi() {
        return this->namaProdi;
    }
    string getKode() {
        return this->kode;
    }
    string getFakultas() {
        return this->fakultas;
    }

    // method
    void addDosen(Dosen dosen) {
        this->LDosen.push_back(dosen);
    }
    void addMhs(Mhs mhs) {
        this->LMhs.push_back(mhs);
    }
    void addCourse(Course c) {
        this->LCourse.push_back(c);
    }

    void printDataProdi() {
        cout << this->kode << " | " << this->namaProdi << " | " << this->fakultas << endl;
        cout << "List Mata Kuliah :" << endl;
        for (int i = 0; i < this->LCourse.size(); i++) {
            cout << i + 1 << ". " << this->LCourse[i].getNamaMK() << " - " << this->LCourse[i].getKodeMK() << " - " << this->LCourse[i].getJumlahSKS() << " SKS" << endl; 
        }
        cout << "List Dosen :" << endl;
        for (int i = 0; i < this->LDosen.size(); i++) {
            cout << i + 1 << ". ";
            this->LDosen[i].printDosen();
            cout << endl;
        }
        cout << "List Mahasiswa :" << endl;
        for (int i = 0; i < this->LMhs.size(); i++) {
            cout << i + 1 << ". ";
            this->LMhs[i].printMhs();
            cout << endl;
        }
    }

    // destructor
    ~Prodi() {}
};
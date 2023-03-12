#include <iostream>
#include <string>
#include "Civitas.cpp"

using namespace std;

class Mhs : public Civitas {
    // attribute
    private:
        string nim, semester;
    
    // constructor
    public:
        Mhs() {
            this->nim = "";
            this->semester = "";
        }

        Mhs(string nim, string semester, string prodi) {
            this->nim = nim;
            this->semester = semester;
        }

        // getter and setter
        string getNim() {
            return this->nim;
        }

        string getSemester() {
            return this->semester;
        }

        void setNim(string nim) {
            this->nim = nim;
        }

        void setSemester(string semester) {
            this->semester = semester;
        }

        // method
        void belajar() {
            cout << "gamau belajar mau nya maen" << endl;
        }

        void printMhs() {
            printCivitas();
            cout << "NIM : " << this->nim << endl;
            cout << "Semester : " << this->semester << endl;
        }

        // destruktor
        ~Mhs() {}
};

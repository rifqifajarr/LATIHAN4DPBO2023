#ifndef CIVITAS_H //only define this class the first time the pre-processor sees this definition
#define CIVITAS_H

#include <iostream>
#include <string>
#include "Human.cpp"

using namespace std;

class Civitas : public Human {
    // attribute
    private:
        string asalUniversitas, emailEdu, fakultas;

    // constructor
    public:
    Civitas() {
        this->asalUniversitas = "";
        this->emailEdu = "";
        this->fakultas = "";
    } 

    Civitas(string asalUniversitas, string emailEdu, string fakultas) {
        this->asalUniversitas = asalUniversitas;
        this->emailEdu = emailEdu;
        this->fakultas = fakultas;
    }

    // getter and setter
    string getAsalUniversitas() {
        return this->asalUniversitas;
    }

    string getEmailEdu() {
        return this->emailEdu;
    }

    string getFakultas() {
        return this->fakultas;
    }

    void setAsalUniversitas(string asalUniversitas) {
        this->asalUniversitas = asalUniversitas;
    }

    void setEmailEdu(string emailEdu) {
        this->emailEdu = emailEdu;
    }

    void setFakultas(string fakultas) {
        this->fakultas = fakultas;
    }

    // method
    void absen() {
        cout << "bang sebut nama" << endl;
    }

    void printCivitas() {
        printHuman();
        cout << "Asal Univ : " << this->asalUniversitas << endl;
        cout << "Email Edu : " << this->emailEdu << endl;
        cout << "Fakultas : " << this->fakultas << endl;
    }

    // destruktor
    ~Civitas() {}
};

#endif
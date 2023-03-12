#include <bits/stdc++.h>
#include "Prodi.cpp"

using namespace std;

int main() {

    Prodi ilkom;
    Dosen dosen;
    Mhs mahasiswa;
    Course course;

    // set nama, kode, dan fakultas prodi menggunakan setter
    ilkom.setNamaProdi("Ilmu Komputer");
    ilkom.setKode("IK");
    ilkom.setFakultas("FPMIPA");

    course.setNamaMK("DPBO");
    course.setKodeMK("IK123");
    course.setJumlahSKS("3");
    ilkom.addCourse(course);

    course.setNamaMK("Alpro 1");
    course.setKodeMK("IK456");
    course.setJumlahSKS("3");
    ilkom.addCourse(course);

    course.setNamaMK("Big Data");
    course.setKodeMK("IK980");
    course.setJumlahSKS("2");
    ilkom.addCourse(course);

    // memasukan data ke objek
    dosen.setNik("123");
    dosen.setNama("Ujang Kandil");
    dosen.setJenisKelamin("Laki Kali");
    dosen.setAsalUniversitas("UPI");
    dosen.setEmailEdu("ujang.kandil@upi.edu");
    dosen.setFakultas("FPMIPA");
    dosen.setNip("234789");
    dosen.setPendTerakhir("SD");
    dosen.setKeahlian("tidur melek");
    // memasukan data ke list di kelas prodi
    ilkom.addDosen(dosen);

    // memasukan data ke objek
    dosen.setNik("456");
    dosen.setNama("Jekeb Sutrisna");
    dosen.setJenisKelamin("Laki Kali");
    dosen.setAsalUniversitas("UPI");
    dosen.setEmailEdu("jekeb@upi.edu");
    dosen.setFakultas("FPMIPA");
    dosen.setNip("098754");
    dosen.setPendTerakhir("TK");
    dosen.setKeahlian("Kayang");
    // memasukan data ke list di kelas prodi
    ilkom.addDosen(dosen);

    // memasukan data ke objek
    mahasiswa.setNik("21222324");
    mahasiswa.setNama("Rifqi Fajar");
    mahasiswa.setJenisKelamin("Laki Kali");
    mahasiswa.setAsalUniversitas("UPI");
    mahasiswa.setEmailEdu("rifqi.fajar@upi.edu");
    mahasiswa.setFakultas("FPMIPA");
    mahasiswa.setNim("2101103");
    mahasiswa.setSemester("4");
    // memasukan data ke list di kelas prodi
    ilkom.addMhs(mahasiswa);

    // memasukan data ke objek
    mahasiswa.setNik("41424344");
    mahasiswa.setNama("Nusyifa Rahma");
    mahasiswa.setJenisKelamin("Perempuan");
    mahasiswa.setAsalUniversitas("Unpad");
    mahasiswa.setEmailEdu("nursyifa@unpad.edu");
    mahasiswa.setFakultas("FISIP");
    mahasiswa.setNim("311202");
    mahasiswa.setSemester("4");
    // memasukan data ke list di kelas prodi
    ilkom.addMhs(mahasiswa);

    ilkom.printDataProdi();

    return 0;
}

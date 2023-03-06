from Prodi import Prodi
from Dosen import Dosen
from Mhs import Mhs

# membuat kelas prodi ilkom
ilkom = Prodi()

# set nama, kode, dan fakultas prodi menggunakan setter
ilkom.setNamaProdi("Ilmu Komputer")
ilkom.setKodeProdi("IK")
ilkom.setFakultas("FPMIPA")

# print kode, nama, dan fakultas prodi menggunakan getter
print(ilkom.getKodeProdi() + " | " + ilkom.getNamaProdi() + " | " + ilkom.getFakultas())

# add Courses
ilkom.addCourses("DPBO", "IK123", "3")
ilkom.addCourses("Alpro 1", "IK456", "3")
ilkom.addCourses("Big Data", "IK980", "2")

# print list matkul
print("List Mata Kuliah :")
ilkom.printCourses()

# membuat kelas untuk menampung sementara data dosen 1
tempDosen = Dosen()
# memasukan data ke objek
tempDosen.setNik("123")
tempDosen.setNama("Ujang Kandil")
tempDosen.setJenisKelamin("Laki Kali")
tempDosen.setAsalUniversitas("UPI")
tempDosen.setEmailEdu("ujang.kandil@upi.edu")
tempDosen.setFakultas("FPMIPA")
tempDosen.setNip("234789")
tempDosen.setPendTerakhir("SD")
tempDosen.setKeahlian("tidur melek")
# memasukan data ke list di kelas prodi
ilkom.addDosen(tempDosen)

# membuat kelas untuk menampung sementara data dosen 2
tempDosen = Dosen()
# memasukan data ke objek
tempDosen.setNik("456")
tempDosen.setNama("Jekeb Sutrisna")
tempDosen.setJenisKelamin("Laki Kali")
tempDosen.setAsalUniversitas("UPI")
tempDosen.setEmailEdu("jekeb@upi.edu")
tempDosen.setFakultas("FPMIPA")
tempDosen.setNip("098754")
tempDosen.setPendTerakhir("TK")
tempDosen.setKeahlian("kayang")
# memasukan data ke list di kelas prodi
ilkom.addDosen(tempDosen)

# print list dosen
print("List Dosen :")
ilkom.printDosen()

# membuat kelas untuk menampung sementara data mhs 1
tempMhs = Mhs()
# memasukan data ke objek
tempMhs.setNik("21222324")
tempMhs.setNama("Rifqi Fajar")
tempMhs.setJenisKelamin("Laki Kali")
tempMhs.setAsalUniversitas("UPI")
tempMhs.setEmailEdu("rifqi.fajar@upi.edu")
tempMhs.setFakultas("FPMIPA")
tempMhs.setNim("2101103")
tempMhs.setSemester("4")
# memasukan data ke list di kelas prodi
ilkom.addMhs(tempMhs)

# membuat kelas untuk menampung sementara data mhs 2
tempMhs = Mhs()
# memasukan data ke objek
tempMhs.setNik("41424344")
tempMhs.setNama("Nusyifa Rahma")
tempMhs.setJenisKelamin("Perempuan")
tempMhs.setAsalUniversitas("Unpad")
tempMhs.setEmailEdu("nursyifa@unpad.edu")
tempMhs.setFakultas("FISIP")
tempMhs.setNim("311202")
tempMhs.setSemester("4")
# memasukan data ke list di kelas prodi
ilkom.addMhs(tempMhs)

# print list mhs
print("List Mahasiswa :")
ilkom.printMhs()
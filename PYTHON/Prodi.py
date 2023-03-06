from Course import Course
from Dosen import Dosen
from Mhs import Mhs

class Prodi (Course, Dosen, Mhs):
    # kelas untuk menampung data prodi

    # atribut
    __namaProdi = ""
    __kodeProdi = ""
    __fakultas = ""
    __lCourses = []
    __lDosen = []
    __lMhs = []

    # konstruktor
    def __init__(self):
        self.__namaProdi = ""
        self.__kodeProdi = ""
        self.__fakultas = ""

    # setter and getter
    def setNamaProdi(self, namaProdi):
        self.__namaProdi = namaProdi
    def setKodeProdi(self, kodeProdi):
        self.__kodeProdi = kodeProdi
    def setFakultas(self, fakultas):
        self.__fakultas = fakultas

    def getNamaProdi(self):
        return self.__namaProdi
    def getKodeProdi(self):
        return self.__kodeProdi
    def getFakultas(self):
        return self.__fakultas
    
    # method
    def addCourses(self, namaMK, kodeMK, jumlahSKS):
        # method untuk menambah course
        temp = Course()
        temp.setNamaMK(namaMK)
        temp.setKodeMK(kodeMK)
        temp.setJumlahSKS(jumlahSKS)
        self.__lCourses.append(temp)

    def addDosen(self, dosen = Dosen()):
        # method untuk menambah dosen, menggunakan objek sebagai parameter soalnya data nya banyak hehe
        self.__lDosen.append(dosen)
    
    def addMhs(self, mhs = Mhs()):
        # method untuk menambah mhs
        self.__lMhs.append(mhs)
    
    def printCourses(self):
        # method untuk print list course
        i = 0
        for course in self.__lCourses:
            print(str(i + 1) + ".", course.getNamaMK(), "-", course.getKodeMK(), "-", course.getJumlahSKS(), "SKS")
            i += 1
    
    def printDosen(self):
        # method untuk print list dosen
        i = 0
        for dosen in self.__lDosen:
            # menggunakan getter dari kelas human
            print(str(i + 1) + ". NIK : " + dosen.getNik())
            print("   Nama : " + dosen.getNama())
            print("   Jenis Kelamin : " + dosen.getJenisKelamin())
            # menggunakan getter dari kelas civitas
            print("   Asal Univ : " + dosen.getAsalUniversitas())
            print("   Email : " + dosen.getEmailEdu())
            print("   Fakultas : " + dosen.getFakultas())
            # menggunakan getter dari kelas dosen
            print("   NIP : " + dosen.getNip())
            print("   Pendidikan Terakhir : " + dosen.getPendTerakhir())
            print("   Keahlian : " + dosen.getKeahlian())
            i += 1

    def printMhs(self):
        # method untuk print list mhs
        i = 0
        for mhs in self.__lMhs:
            # menggunakan getter dari kelas human
            print(str(i + 1) + ". NIK : " + mhs.getNik())
            print("   Nama : " + mhs.getNama())
            print("   Jenis Kelamin : " + mhs.getJenisKelamin())
            # menggunakan getter dari kelas civitas
            print("   Asal Univ : " + mhs.getAsalUniversitas())
            print("   Email : " + mhs.getEmailEdu())
            print("   Fakultas : " + mhs.getFakultas())
            # menggunakan getter dari kelas mhs
            print("   NIM : " + mhs.getNim())
            print("   Semester : " + mhs.getSemester())
            i += 1

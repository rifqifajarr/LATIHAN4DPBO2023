from Civitas import Civitas

class Mhs (Civitas):
    # kelas untuk menampung data mhs dan method belajar

    # atribut
    __nim = ""
    __semester = ""

    # konstruktor
    def __init__(self):
        self.__nim = ""
        self.__semester = ""

    # setter getter
    def setNim(self, nim):
        self.__nim = nim
    def setSemester(self, semester):
        self.__semester = semester
    
    def getNim(self):
        return self.__nim
    def getSemester(self):
        return self.__semester
    
    # method
    def belajar(self):
        print("gamau belajar mau nya maen")

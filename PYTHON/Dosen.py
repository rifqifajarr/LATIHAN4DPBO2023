from Civitas import Civitas

class Dosen (Civitas):
    # kelas untuk menampung data dosen dan method mengajar

    # atribut
    __nip = ""
    __pendTerakhir = ""
    __keahlian = ""

    # konstruktor
    def __init__(self):
        self.__nip = ""
        self.__pendTerakhir = ""
        self.__keahlian = ""
    
    # setter and getter
    def setNip(self, nip):
        self.__nip = nip
    def setPendTerakhir(self, pendTerakhir):
        self.__pendTerakhir = pendTerakhir
    def setKeahlian(self, keahlian):
        self.__keahlian = keahlian

    def getNip(self):
        return self.__nip
    def getPendTerakhir(self):
        return self.__pendTerakhir
    def getKeahlian(self):
        return self.__keahlian
    
    # method
    def ngajar(self):
        print("jadi gini adik adik..")

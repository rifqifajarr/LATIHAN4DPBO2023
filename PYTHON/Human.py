class Human:
    # kelas untuk menampung data human dan method mangan

    # atribut
    __nik = ""
    __nama = ""
    __jenisKelamin = ""

    # konstruktor
    def __init__(self):
        self.__nik = ""
        self.__nama = ""
        self.__jenisKelamin = ""

    # setter getter
    def setNik(self, nik):
        self.__nik = nik
    def setNama(self, nama):
        self.__nama = nama
    def setJenisKelamin(self, kelamin):
        self.__jenisKelamin = kelamin
    
    def getNik(self):
        return self.__nik
    def getNama(self):
        return self.__nama
    def getJenisKelamin(self):
        return self.__jenisKelamin
    
    # method
    def makan(self):
        print("oke mangan..")

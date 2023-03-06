class Course:
    # kelas untuk menampung data course/mata kuliah

    # atribut
    __namaMK = ""
    __kodeMK = ""
    __jumlahSKS = ""

    # konstruktor
    def __init__(self):
        self.__namaMK = ""
        self.__kodeMK = ""
        self.__jumlahSKS = ""
    
    # setter and getter
    def setNamaMK(self, namaMK):
        self.__namaMK = namaMK
    def setKodeMK(self, kodeMK):
        self.__kodeMK = kodeMK
    def setJumlahSKS(self, jumlahSKS):
        self.__jumlahSKS = jumlahSKS
    
    def getNamaMK(self):
        return self.__namaMK
    def getKodeMK(self):
        return self.__kodeMK
    def getJumlahSKS(self):
        return self.__jumlahSKS
    
    # method
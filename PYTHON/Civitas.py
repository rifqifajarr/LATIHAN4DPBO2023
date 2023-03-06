from Human import Human

class Civitas (Human):
    # kelas untuk menampung data civitas dan method absen

    # atribut
    __asalUniv = ""
    __emailEdu = ""
    __fakultas = ""

    # konstruktor
    def __init__(self):
        self.__asalUniv = ""
        self.__emailEdu = ""
        self.__fakultas = ""
    
    # setter getter
    def setAsalUniversitas(self, asalUniv):
        self.__asalUniv = asalUniv
    def setEmailEdu(self, emailEdu):
        self.__emailEdu = emailEdu
    def setFakultas(self, fakultas):
        self.__fakultas = fakultas

    def getAsalUniversitas(self):
        return self.__asalUniv
    def getEmailEdu(self):
        return self.__emailEdu
    def getFakultas(self):
        return self.__fakultas
    
    # method
    def absen(self):
        print("bang sebut nama")

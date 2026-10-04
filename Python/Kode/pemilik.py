class Pemilik:
    def __init__(self, nama="", telepon="", alamat=""):
        self.__nama = nama
        self.__telepon = telepon
        self.__alamat = alamat

    def get_nama(self):
        return self.__nama

    def __str__(self):
        return f"{self.__nama} ({self.__telepon}), {self.__alamat}"

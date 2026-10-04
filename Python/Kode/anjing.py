from hewan import Hewan

class Anjing(Hewan):
    def __init__(self, nama, umur, berat, pemilik, nomor_kartu, sudah_vaksin, catatan, ras, terlatih):
        super().__init__(nama, umur, berat, pemilik, nomor_kartu, sudah_vaksin, catatan)
        self.__ras = ras
        self.__terlatih = terlatih

    def jenis(self):
        return "Anjing"

    def suara(self):
        return "Guk guk!"

    def detail_khusus(self):
        return f"Ras: {self.__ras}, Terlatih: " + ("Ya" if self.__terlatih else "Tidak")

    def hitung_biaya(self):
        return 60000 + self._berat * 2000

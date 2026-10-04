from hewan import Hewan

class Burung(Hewan):
    def __init__(self, nama, umur, berat, pemilik, nomor_kartu, sudah_vaksin, catatan, lebar_sayap, bisa_terbang):
        super().__init__(nama, umur, berat, pemilik, nomor_kartu, sudah_vaksin, catatan)
        self.__lebar_sayap = lebar_sayap
        self.__bisa_terbang = bisa_terbang

    def jenis(self):
        return "Burung"

    def suara(self):
        return "Cuit cuit!"

    def detail_khusus(self):
        terbang = "Ya" if self.__bisa_terbang else "Tidak"
        return f"Lebar sayap: {int(self.__lebar_sayap)} cm, Bisa terbang: {terbang}"

    def hitung_biaya(self):
        return 40000 + (0 if self.__bisa_terbang else 30000)

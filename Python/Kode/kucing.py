from hewan import Hewan

class Kucing(Hewan):
    def __init__(self, nama, umur, berat, pemilik, nomor_kartu, sudah_vaksin, catatan, bulu_panjang):
        super().__init__(nama, umur, berat, pemilik, nomor_kartu, sudah_vaksin, catatan)
        self.__bulu_panjang = bulu_panjang

    def jenis(self):
        return "Kucing"

    def suara(self):
        return "Meow~"

    def detail_khusus(self):
        return "Bulu panjang: " + ("Ya" if self.__bulu_panjang else "Tidak")

    def hitung_biaya(self):
        return 50000 + (25000 if self.__bulu_panjang else 0)

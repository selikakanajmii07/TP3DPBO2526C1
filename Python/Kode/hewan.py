from abc import ABC, abstractmethod

class Hewan(ABC):
    def __init__(self, nama, umur, berat, pemilik, nomor_kartu, sudah_vaksin, catatan):
        self._nama = nama
        self._umur = umur
        self._berat = berat
        self._pemilik = pemilik
        self._nomor_kartu = nomor_kartu
        self._sudah_vaksin = sudah_vaksin
        self._catatan = catatan

    @abstractmethod
    def jenis(self): ...

    @abstractmethod
    def suara(self): ...

    @abstractmethod
    def detail_khusus(self): ...

    @abstractmethod
    def hitung_biaya(self): ...

    def tampilkan_info(self):
        vaksin = "Sudah" if self._sudah_vaksin else "Belum"
        print(f"  Jenis   : {self.jenis()}")
        print(f"  Nama    : {self._nama} ({self._umur} th, {self._berat:g} kg)")
        print(f"  Detail  : {self.detail_khusus()}")
        print(f"  Suara   : {self.suara()}")
        print(f"  Pemilik : {self._pemilik}")
        print(f"  Kartu   : [{self._nomor_kartu}] Vaksin: {vaksin}, Catatan: {self._catatan}")
        print(f"  Biaya   : Rp{int(self.hitung_biaya())}")

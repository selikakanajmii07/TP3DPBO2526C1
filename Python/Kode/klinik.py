class Klinik:
    def __init__(self, nama):
        self.__nama = nama
        self.__daftar_pasien = []

    def tambah_pasien(self, hewan):
        self.__daftar_pasien.append(hewan)

    def total_biaya(self):
        return sum(h.hitung_biaya() for h in self.__daftar_pasien)

    def tampil_semua(self, judul):
        print(f"\n===== {self.__nama} ({len(self.__daftar_pasien)} pasien) =====")
        for i, h in enumerate(self.__daftar_pasien, start=1):
            print(f"Pasien #{i}")
            h.tampilkan_info()
        print(f"Total pendapatan: Rp{int(self.total_biaya())}")

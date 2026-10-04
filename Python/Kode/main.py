from pemilik import Pemilik
from kucing import Kucing
from anjing import Anjing
from burung import Burung
from klinik import Klinik

if __name__ == "__main__":
    klinik = Klinik("Klinik Hewan Sehat Bandung")

    # Data awal
    klinik.tambah_pasien(Kucing("Mochi", 2, 3.5,
        Pemilik("Rina", "0812-1111", "Jl. Mawar 1, Sumedang"),
        "KK-001", True, "Cek rutin", True))
    klinik.tambah_pasien(Anjing("Bruno", 4, 18.0,
        Pemilik("Budi", "0813-2222", "Jl. Melati 5, Bandung"),
        "KK-002", True, "Luka kaki", "Golden Retriever", True))
    klinik.tambah_pasien(Burung("Kiki", 1, 0.3,
        Pemilik("Sari", "0857-3333", "Jl. Kenanga 9, Cimalaka"),
        "KK-003", False, "Sayap kiri patah", 25, False))

    klinik.tampil_semua("SEBELUM PENAMBAHAN DATA")

    # Penambahan data
    klinik.tambah_pasien(Kucing("Luna", 5, 4.2,
        Pemilik("Dewi", "0819-4444", "Jl. Anggrek 3, Tanjungsari"),
        "KK-004", True, "Steril", False))
    klinik.tambah_pasien(Anjing("Rocky", 2, 9.5,
        Pemilik("Andi", "0821-5555", "Jl. Cempaka 7, Sumedang"),
        "KK-005", False, "Vaksin pertama", "Pomeranian", False))
    klinik.tambah_pasien(Burung("Beo", 6, 0.5,
        Pemilik("Tono", "0822-6666", "Jl. Dahlia 2, Jatinangor"),
        "KK-006", True, "Cek paruh", 30, True))

    klinik.tampil_semua("SESUDAH PENAMBAHAN DATA")

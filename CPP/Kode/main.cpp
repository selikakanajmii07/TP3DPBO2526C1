#include "Klinik.h"
#include "Kucing.h"
#include "Anjing.h"
#include "Burung.h"

int main() {
    Klinik klinik("Klinik Hewan Sehat Bandung");

    // Data awal
    klinik.tambahPasien(new Kucing("Mochi", 2, 3.5,
        Pemilik("Rina", "0812-1111", "Jl. Mawar 1, Sumedang"),
        "KK-001", true, "Cek rutin", true));
    klinik.tambahPasien(new Anjing("Bruno", 4, 18.0,
        Pemilik("Budi", "0813-2222", "Jl. Melati 5, Bandung"),
        "KK-002", true, "Luka kaki", "Golden Retriever", true));
    klinik.tambahPasien(new Burung("Kiki", 1, 0.3,
        Pemilik("Sari", "0857-3333", "Jl. Kenanga 9, Cimalaka"),
        "KK-003", false, "Sayap kiri patah", 25, false));

    klinik.tampilSemua("SEBELUM PENAMBAHAN DATA");

    // Penambahan data
    klinik.tambahPasien(new Kucing("Luna", 5, 4.2,
        Pemilik("Dewi", "0819-4444", "Jl. Anggrek 3, Tanjungsari"),
        "KK-004", true, "Steril", false));
    klinik.tambahPasien(new Anjing("Rocky", 2, 9.5,
        Pemilik("Andi", "0821-5555", "Jl. Cempaka 7, Sumedang"),
        "KK-005", false, "Vaksin pertama", "Pomeranian", false));
    klinik.tambahPasien(new Burung("Beo", 6, 0.5,
        Pemilik("Tono", "0822-6666", "Jl. Dahlia 2, Jatinangor"),
        "KK-006", true, "Cek paruh", 30, true));

    klinik.tampilSemua("SESUDAH PENAMBAHAN DATA");
    return 0;
}

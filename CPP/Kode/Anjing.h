#ifndef ANJING_H
#define ANJING_H
#include "Hewan.h"

class Anjing : public Hewan {
private:
    string ras;
    bool terlatih;
public:
    Anjing(string nama, int umur, double berat, Pemilik pemilik, string nomorKartu, bool sudahVaksin, string catatan, string ras, bool terlatih) : Hewan(nama, umur, berat, pemilik, nomorKartu, sudahVaksin, catatan), ras(ras), terlatih(terlatih) {}

    string jenis() const override { return "Anjing"; }
    string suara() const override { return "Guk guk!"; }
    string detailKhusus() const override { return "Ras: " + ras + ", Terlatih: " + (terlatih ? "Ya" : "Tidak"); }
    double hitungBiaya() const override { return 60000 + berat * 2000; }
};

#endif

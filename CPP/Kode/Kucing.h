#ifndef KUCING_H
#define KUCING_H
#include "Hewan.h"

class Kucing : public Hewan {
private:
    bool buluPanjang;
public:
    Kucing(string nama, int umur, double berat, Pemilik pemilik, string nomorKartu, bool sudahVaksin, string catatan, bool buluPanjang) : Hewan(nama, umur, berat, pemilik, nomorKartu, sudahVaksin, catatan), buluPanjang(buluPanjang) {}

    string jenis() const override { return "Kucing"; }
    string suara() const override { return "Meow~"; }
    string detailKhusus() const override { return string("Bulu panjang: ") + (buluPanjang ? "Ya" : "Tidak"); }
    double hitungBiaya() const override { return 50000 + (buluPanjang ? 25000 : 0); }
};

#endif

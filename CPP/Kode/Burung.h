#ifndef BURUNG_H
#define BURUNG_H
#include "Hewan.h"

class Burung : public Hewan {
private:
    double lebarSayap;
    bool bisaTerbang;
public:
    Burung(string nama, int umur, double berat, Pemilik pemilik, string nomorKartu, bool sudahVaksin, string catatan, double lebarSayap, bool bisaTerbang) : Hewan(nama, umur, berat, pemilik, nomorKartu, sudahVaksin, catatan), lebarSayap(lebarSayap), bisaTerbang(bisaTerbang) {}

    string jenis() const override { return "Burung"; }
    string suara() const override { return "Cuit cuit!"; }
    string detailKhusus() const override {
        return "Lebar sayap: " + to_string((int)lebarSayap) + " cm, Bisa terbang: " + (bisaTerbang ? "Ya" : "Tidak");
    }
    double hitungBiaya() const override { return 40000 + (bisaTerbang ? 0 : 30000); }
};

#endif

#ifndef HEWAN_H
#define HEWAN_H
#include <iostream>
#include <string>
#include "Pemilik.h"
using namespace std;

class Hewan {
protected:
    string nama;
    int umur;
    double berat;
    Pemilik pemilik;
    string nomorKartu;
    bool sudahVaksin;
    string catatan;
public:
    Hewan(string nama, int umur, double berat, Pemilik pemilik, string nomorKartu, bool sudahVaksin, string catatan) : nama(nama), umur(umur), berat(berat), pemilik(pemilik), nomorKartu(nomorKartu), sudahVaksin(sudahVaksin), catatan(catatan) {}
    virtual ~Hewan() {}

    virtual string jenis() const = 0;
    virtual string suara() const = 0;
    virtual string detailKhusus() const = 0;
    virtual double hitungBiaya() const = 0;

    void tampilkanInfo() const {
        cout << "  Jenis   : " << jenis() << endl;
        cout << "  Nama    : " << nama << " (" << umur << " th, " << berat << " kg)" << endl;
        cout << "  Detail  : " << detailKhusus() << endl;
        cout << "  Suara   : " << suara() << endl;
        cout << "  Pemilik : " << pemilik.toString() << endl;
        cout << "  Kartu   : [" << nomorKartu << "] Vaksin: " << (sudahVaksin ? "Sudah" : "Belum")
             << ", Catatan: " << catatan << endl;
        cout << "  Biaya   : Rp" << (long)hitungBiaya() << endl;
    }
};

#endif

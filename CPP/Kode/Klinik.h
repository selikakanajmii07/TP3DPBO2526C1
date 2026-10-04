#ifndef KLINIK_H
#define KLINIK_H
#include <iostream>
#include <vector>
#include <string>
#include "Hewan.h"
using namespace std;

class Klinik {
private:
    string nama;
    vector<Hewan*> daftarPasien;
public:
    Klinik(string nama) : nama(nama) {}
    ~Klinik() { for (Hewan* h : daftarPasien) delete h; }

    void tambahPasien(Hewan* h) { daftarPasien.push_back(h); }

    double totalBiaya() const {
        double total = 0;
        for (Hewan* h : daftarPasien) total += h->hitungBiaya();
        return total;
    }

    void tampilSemua(const string& judul) const {
        cout << "\n===== " << nama << " (" << daftarPasien.size() << " pasien) =====" << endl;
        for (size_t i = 0; i < daftarPasien.size(); i++) {
            cout << "Pasien #" << i + 1 << endl;
            daftarPasien[i]->tampilkanInfo();
        }
        cout << "Total pendapatan: Rp" << (long)totalBiaya() << endl;
    }
};

#endif

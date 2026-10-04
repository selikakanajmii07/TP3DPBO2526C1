#ifndef PEMILIK_H
#define PEMILIK_H
#include <string>
using namespace std;

class Pemilik {
private:
    string nama, telepon, alamat;
public:
    Pemilik(string nama = "", string telepon = "", string alamat = "") : nama(nama), telepon(telepon), alamat(alamat) {}

    string getNama() const { return nama; }
    string toString() const { return nama + " (" + telepon + "), " + alamat; }
};

#endif
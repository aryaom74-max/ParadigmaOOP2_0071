#include <iostream>
#include <string>

using namespace std;

// Kelas Induk (Base Class)
class RekeningBank {
protected:
    string namaPemilik;
    double saldo;
    double admin; 

public:
    // Constructor
    RekeningBank(string nama, double sld, double adm) {
        namaPemilik = nama;
        saldo = sld;
        admin = adm;
    }

    // Fungsi virtual agar bisa di-override oleh kelas turunan
    virtual void potongAdmin() {
        cout << "Memproses potongan admin..." << endl;
    }

    virtual void tampilkanInfo() {
        cout << "Nama Pemilik : " << namaPemilik << endl;
        cout << "Saldo Saat Ini: Rp " << saldo << endl;
        cout << "-----------------------------------" << endl;
    }
};


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

// Kelas Turunan 1 (Derived Class)
class RekeningSyariah : public RekeningBank {
public:
    // Constructor Rekening Syariah (Biaya admin di-set 0 atau bebas biaya)
    RekeningSyariah(string nama, double sld) : RekeningBank(nama, sld, 0) {}

    // Overriding fungsi potongAdmin
    void potongAdmin() override {
        cout << "Rekening Syariah: Bebas biaya admin." << endl;
        // Saldo tidak berkurang
    }
};


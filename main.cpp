#include <iostream>
#include <string>
using namespace std;

void tiket() {
    int pilih, jumlah, harga;
    string tujuan;

    cout << "=== TIKET BUS ===" << endl;
    cout << "1. Malang - Surabaya Rp15000" << endl;
    cout << "2. Malang - Pasuruan Rp20000" << endl;
    cout << "3. Malang - Jombang Rp25000" << endl;

    cout << "Pilih tujuan: ";
    cin >> pilih;

    if (pilih == 1) {
        tujuan = "Malang - Surabaya";
        harga = 15000;
    }
    else if (pilih == 2) {
        tujuan = "Malang - Pasuruan";
        harga = 20000;
    }
    else if (pilih == 3) {
        tujuan = "Malang - Jombang";
        harga = 25000;
    }
    else {
        cout << "Pilihan salah!";
        return;
    }

    cout << "Jumlah tiket: ";
    cin >> jumlah;

    cout << "Tujuan: " << tujuan << endl;
    cout << "Harga: Rp" << harga << endl;
    cout << "Jumlah: " << jumlah << endl;
    cout << "Total: Rp" << harga * jumlah << endl;
}

int main() {
    tiket();
    return 0;
}

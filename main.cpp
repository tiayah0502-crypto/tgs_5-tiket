#include <iostream>
#include <string>
using namespace std;

void tiket() {
    int pilih, jumlah, harga;
    string tujuan;
    char ulang;

    do {
        cout << "=== TIKET BUS ===" << endl;
        cout << "1. Malang - Kediri Rp20000" << endl;
        cout << "2. Malang - Blitar Rp25000" << endl;
        cout << "3. Malang - Tulungagung Rp30000" << endl;

        cout << "Pilih tujuan: ";
        cin >> pilih;

        if (pilih == 1) {
            tujuan = "Malang - Kediri";
            harga = 20000;
        }
        else if (pilih == 2) {
            tujuan = "Malang - Blitar";
            harga = 25000;
        }
        else if (pilih == 3) {
            tujuan = "Malang - Tulungagung";
            harga = 30000;
        }
        else {
            cout << "Pilihan salah!" << endl;
            continue;
        }

        cout << "Jumlah tiket: ";
        cin >> jumlah;

        cout << "Tujuan: " << tujuan << endl;
        cout << "Harga: Rp" << harga << endl;
        cout << "Jumlah: " << jumlah << endl;
        cout << "Total: Rp" << harga * jumlah << endl;

        cout << "Pesan lagi? (y/t): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');
}

int main() {
    tiket();
    return 0;
}

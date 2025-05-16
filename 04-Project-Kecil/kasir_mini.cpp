#include <iostream>
using namespace std;
int main() {
    int total = 0, harga, jumlah;
    char lagi;
    do {
        cout << "Masukkan harga barang: ";
        cin >> harga;
        cout << "Jumlah: ";
        cin >> jumlah;
        total += harga * jumlah;
        cout << "Tambah barang lagi? (y/n): ";
        cin >> lagi;
    } while (lagi == 'y');
    cout << "Total belanja: Rp" << total << endl;
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float nilaiAkhir;
};

int main() {
    const int JUMLAH_MHS = 5;
    Mahasiswa data[JUMLAH_MHS];
    float totalNilai = 0;
    int indexTertinggi = 0;

    cout << "Masukkan data untuk 5 mahasiswa:" << endl;
    for (int i = 0; i < JUMLAH_MHS; ++i) {
        cout << "\nMahasiswa ke-" << i + 1 << ":" << endl;
        cout << "Nama         : ";
        getline(cin, data[i].nama);
        cout << "NIM          : ";
        getline(cin, data[i].nim);
        cout << "Nilai Akhir  : ";
        cin >> data[i].nilaiAkhir;

        while (cin.fail() || data[i].nilaiAkhir < 0 || data[i].nilaiAkhir > 100) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Nilai tidak valid. Masukkan nilai 0 - 100: ";
            cin >> data[i].nilaiAkhir;
        }

        cin.ignore();
        totalNilai += data[i].nilaiAkhir;

        if (data[i].nilaiAkhir > data[indexTertinggi].nilaiAkhir) {
            indexTertinggi = i;
        }
    }

    float rataRata = totalNilai / JUMLAH_MHS;

    cout << "\n======================================" << endl;
    cout << "Mahasiswa dengan nilai tertinggi:" << endl;
    cout << "Nama : " << data[indexTertinggi].nama << endl;
    cout << "NIM  : " << data[indexTertinggi].nim << endl;
    cout << "Nilai: " << data[indexTertinggi].nilaiAkhir << endl;

    cout << "\nRata-rata nilai semua mahasiswa: " << rataRata << endl;
    cout << "======================================" << endl;

    return 0;
}


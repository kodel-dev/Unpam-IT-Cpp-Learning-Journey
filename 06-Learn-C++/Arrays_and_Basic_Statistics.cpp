#include <iostream>
using namespace std;

int main() {
    const int JUMLAH_NILAI = 10;
    int nilai[JUMLAH_NILAI];
    int total = 0;
    int tertinggi, terendah;
    float rata_rata;

    cout << "Masukkan 10 nilai ujian (0 - 100):" << endl;
    for (int i = 0; i < JUMLAH_NILAI; ++i) {
        cout << "Nilai ke-" << i + 1 << ": ";
        cin >> nilai[i];

        while (cin.fail() || nilai[i] < 0 || nilai[i] > 100) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Nilai tidak valid. Masukkan antara 0–100: ";
            cin >> nilai[i];
        }

        total += nilai[i];
    }

    rata_rata = total / static_cast<float>(JUMLAH_NILAI);

    tertinggi = terendah = nilai[0];
    for (int i = 1; i < JUMLAH_NILAI; ++i) {
        if (nilai[i] > tertinggi) tertinggi = nilai[i];
        if (nilai[i] < terendah) terendah = nilai[i];
    }

    cout << "\n=== Statistik Nilai ===" << endl;
    cout << "Rata-rata nilai: " << rata_rata << endl;
    cout << "Nilai tertinggi: " << tertinggi << endl;
    cout << "Nilai terendah : " << terendah << endl;

    cout << "\nNilai di atas rata-rata:" << endl;
    bool ada = false;
    for (int i = 0; i < JUMLAH_NILAI; ++i) {
        if (nilai[i] > rata_rata) {
            cout << "- Nilai ke-" << i + 1 << ": " << nilai[i] << endl;
            ada = true;
        }
    }

    if (!ada) {
        cout << "Tidak ada nilai di atas rata-rata." << endl;
    }

    return 0;
}


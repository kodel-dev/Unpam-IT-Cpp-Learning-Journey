#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void bubbleSort(int arr[], int n, bool ascending) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if ((ascending && arr[j] > arr[j + 1]) || (!ascending && arr[j] < arr[j + 1])) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int binarySearch(int arr[], int n, int target) {
    int kiri = 0, kanan = n - 1;
    while (kiri <= kanan) {
        int tengah = (kiri + kanan) / 2;
        if (arr[tengah] == target)
            return tengah;
        else if (arr[tengah] < target)
            kiri = tengah + 1;
        else
            kanan = tengah - 1;
    }
    return -1;
}

void tampilkanData(int arr[], int n) {
    cout << "[ ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i];
        if (i < n - 1) cout << ", ";
    }
    cout << " ]" << endl;
}

void garis() {
    cout << "------------------------------------------" << endl;
}

int main() {
    const int MAX = 100;
    int data[MAX], jumlah = 0;
    bool sudahDiisi = false;
    int pilihan;

    do {
        system("cls");
        garis();
        cout << "      MENU PROGRAM SORT & SEARCH" << endl;
        garis();
        cout << "1. Input Data" << endl;
        cout << "2. Urutkan Data (Bubble Sort)" << endl;
        cout << "3. Cari Angka (Binary Search)" << endl;
        cout << "4. Keluar" << endl;
        garis();
        cout << "Pilih menu (1-4): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                cout << "\nMasukkan jumlah data: ";
                cin >> jumlah;
                while (cin.fail() || jumlah <= 0 || jumlah > MAX) {
                    cin.clear(); cin.ignore(1000, '\n');
                    cout << "Jumlah tidak valid. Masukkan antara 1 - " << MAX << ": ";
                    cin >> jumlah;
                }

                for (int i = 0; i < jumlah; ++i) {
                    cout << "Data ke-" << i + 1 << ": ";
                    cin >> data[i];
                }

                sudahDiisi = true;
                cout << "\nData berhasil disimpan.\n\n";
                system("pause");
                break;
            }

            case 2: {
                if (!sudahDiisi) {
                    cout << "\n[!] Silakan input data terlebih dahulu.\n";
                    system("pause");
                    break;
                }

                int arah;
                cout << "\nUrutkan Data:" << endl;
                cout << "1. Ascending (kecil ke besar)" << endl;
                cout << "2. Descending (besar ke kecil)" << endl;
                cout << "Pilih opsi (1/2): ";
                cin >> arah;

                bool ascending = (arah == 1);

                clock_t mulai = clock();
                bubbleSort(data, jumlah, ascending);
                clock_t selesai = clock();
                double waktu = double(selesai - mulai) / CLOCKS_PER_SEC;

                cout << "\nData setelah diurutkan:\n";
                tampilkanData(data, jumlah);
                cout << "Waktu proses sorting: " << waktu << " detik\n";
                system("pause");
                break;
            }

            case 3: {
                if (!sudahDiisi) {
                    cout << "\n[!] Silakan input data terlebih dahulu.\n";
                    system("pause");
                    break;
                }

                int cari;
                cout << "\nMasukkan angka yang ingin dicari: ";
                cin >> cari;

                bubbleSort(data, jumlah, true);

                clock_t mulai = clock();
                int hasil = binarySearch(data, jumlah, cari);
                clock_t selesai = clock();
                double waktu = double(selesai - mulai) / CLOCKS_PER_SEC;

                cout << "\nHasil Pencarian:\n";
                if (hasil != -1)
                    cout << cari << " ditemukan di indeks ke-" << hasil << " (posisi ke-" << hasil + 1 << ").\n";
                else
                    cout << cari << " tidak ditemukan dalam data.\n";

                cout << "Waktu proses pencarian: " << waktu << " detik\n";
                system("pause");
                break;
            }

            case 4:
                cout << "\nTerima kasih telah menggunakan program ini!\n";
                break;

            default:
                cout << "\n[!] Pilihan tidak valid. Silakan coba lagi.\n";
                system("pause");
        }

    } while (pilihan != 4);

    return 0;
}


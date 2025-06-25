#include <iostream>
using namespace std;

// Fungsi untuk menghitung faktorial (menggunakan for loop)
int hitungFaktorial(int n) {
    int hasil = 1;
    for (int i = 1; i <= n; ++i) {
        hasil *= i;
    }
    return hasil;
}

// Fungsi untuk mengecek bilangan prima (menggunakan while loop)
bool cekPrima(int n) {
    if (n <= 1) return false;

    int i = 2;
    while (i * i <= n) {
        if (n % i == 0)
            return false;
        i++;
    }
    return true;
}

int main() {
    int angka;

    cout << "Masukkan bilangan: ";
    cin >> angka;

    int faktorial = hitungFaktorial(angka);
    cout << "Faktorial dari " << angka << " = " << faktorial << endl;

    if (cekPrima(angka)) {
        cout << angka << " adalah bilangan prima." << endl;
    } else {
        cout << angka << " bukan bilangan prima." << endl;
    }

    return 0;
}


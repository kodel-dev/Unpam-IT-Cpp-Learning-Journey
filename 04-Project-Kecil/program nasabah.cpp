#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    printf("Nama : Muhammad Amin\n");
    double saldo = 10000000.0;
    double bungaPersen = 1.5;
    double cicilanPersen = 10.0;
    int bulan = 1;
    cout << fixed << setprecision(2);
    cout << "Daftar Cicilan Bulanan:\n";
    cout << "-------------------------------------------------\n";
    cout << "Bulan\tBunga\t\tCicilan Pokok\tTotal Bayar\tSisa Hutang\n";
    cout << "-------------------------------------------------\n";
    while (saldo >= 1000000.0) {
        double bunga = saldo * (bungaPersen / 100.0);
        double cicilanPokok = saldo * (cicilanPersen / 100.0);
        double totalBayar = bunga + cicilanPokok;
        saldo -= cicilanPokok;
        cout << bulan << "\tRP" << bunga << "\tRP" << cicilanPokok
             << "\tRP" << totalBayar << "\tRP" << saldo << endl;
        bulan++;
    }
    cout << "Sisa hutang kurang dari 1 juta pada bulan ke-" << bulan << ".\n";
    cout << "Terima kasih, Muhammad Amin , telah melunasi cicilan Anda!\n";
    return 0;
}

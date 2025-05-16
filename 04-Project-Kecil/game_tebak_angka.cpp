#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    int angka = rand() % 10 + 1, tebakan;
    cout << "Tebak angka antara 1-10: ";
    cin >> tebakan;
    if (tebakan == angka)
        cout << "Tebakan benar!";
    else
        cout << "Salah, angka: " << angka;
    cout << endl;
    return 0;
}

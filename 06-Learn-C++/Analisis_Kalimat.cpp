#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string kalimat;
    int jumlahKarakter = 0, jumlahKata = 0;

    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);

    for (char c : kalimat) {
        if (!isspace(c)) {
            jumlahKarakter++;
        }
    }

    bool dalamKata = false;
    for (char c : kalimat) {
        if (!isspace(c) && !dalamKata) {
            jumlahKata++;
            dalamKata = true;
        } else if (isspace(c)) {
            dalamKata = false;
        }
    }

    string kalimatUpper = kalimat;
    for (char &c : kalimatUpper) {
        c = toupper(c);
    }

    cout << "\n?? Hasil Analisis Kalimat:" << endl;
    cout << "• Jumlah karakter (tanpa spasi) : " << jumlahKarakter << endl;
    cout << "• Jumlah kata                   : " << jumlahKata << endl;
    cout << "• Kalimat dalam huruf besar     : " << kalimatUpper << endl;

    return 0;
}


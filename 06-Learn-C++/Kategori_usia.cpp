#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Masukkan usia Anda: ";
    cin >> age;

    if (age >= 0 && age <= 12) {
        cout << "Kategori: Child (Anak-anak)" << endl;
    } else if (age >= 13 && age <= 17) {
        cout << "Kategori: Teenager (Remaja)" << endl;
    } else if (age >= 18 && age <= 59) {
        cout << "Kategori: Adult (Dewasa)" << endl;
    } else if (age >= 60) {
        cout << "Kategori: Senior (Lansia)" << endl;
    } else {
        cout << "Usia tidak valid." << endl;
    }

    return 0;
}


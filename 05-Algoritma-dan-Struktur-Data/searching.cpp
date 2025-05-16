#include <iostream>
using namespace std;
int main() {
    int data[] = {4, 7, 2, 9}, cari = 7;
    for (int i = 0; i < 4; i++) {
        if (data[i] == cari) {
            cout << "Data ditemukan di indeks " << i << endl;
            return 0;
        }
    }
    cout << "Data tidak ditemukan" << endl;
    return 0;
}

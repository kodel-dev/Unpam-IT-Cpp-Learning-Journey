#include <iostream>
using namespace std;
int main() {
    int nilai;
    cout << "Masukkan nilai: ";
    cin >> nilai;

    if (nilai >= 80) {
        cout << "Nilai Anda A" << endl;
    } else if (nilai >= 70) {
        cout << "Nilai Anda B" << endl;
    } else {
        cout << "Nilai Anda C atau kurang" << endl;
    }
    return 0;
}

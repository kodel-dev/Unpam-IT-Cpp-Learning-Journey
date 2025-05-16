#include <iostream>
using namespace std;
class Mahasiswa {
public:
    string nama;
    void sapa() {
        cout << "Halo, saya " << nama << endl;
    }
};
int main() {
    Mahasiswa m;
    m.nama = "Amin";
    m.sapa();
    return 0;
}

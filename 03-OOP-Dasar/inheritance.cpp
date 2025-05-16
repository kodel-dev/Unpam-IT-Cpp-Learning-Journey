#include <iostream>
using namespace std;
class Orang {
public:
    void identitas() {
        cout << "Saya orang" << endl;
    }
};
class Mahasiswa : public Orang {
public:
    void status() {
        cout << "Saya mahasiswa" << endl;
    }
};
int main() {
    Mahasiswa m;
    m.identitas();
    m.status();
    return 0;
}

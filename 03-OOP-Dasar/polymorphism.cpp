#include <iostream>
using namespace std;
class Hewan {
public:
    virtual void suara() {
        cout << "Hewan bersuara..." << endl;
    }
};
class Anjing : public Hewan {
public:
    void suara() override {
        cout << "Guk guk" << endl;
    }
};
int main() {
    Hewan* h = new Anjing();
    h->suara();
    return 0;
}

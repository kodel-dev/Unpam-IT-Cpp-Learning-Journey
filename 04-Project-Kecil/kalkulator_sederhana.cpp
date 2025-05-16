using namespace std;
int main() {
    double a, b;
    char op;
    cout << "Masukkan operasi (contoh: 3 + 2): ";
    cin >> a >> op >> b;
    switch (op) {
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case '*': cout << a * b; break;
        case '/': cout << a / b; break;
        default: cout << "Operator tidak valid"; break;
    }
    cout << endl;
    return 0;
}

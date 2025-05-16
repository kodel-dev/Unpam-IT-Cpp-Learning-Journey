#include <iostream>
using namespace std;
int main() {
    int data[] = {5, 3, 8, 1};
    int n = 4;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (data[i] > data[j])
                swap(data[i], data[j]);
        }
    }
    cout << "Hasil sorting: ";
    for (int i = 0; i < n; i++) cout << data[i] << " ";
    cout << endl;
    return 0;
}

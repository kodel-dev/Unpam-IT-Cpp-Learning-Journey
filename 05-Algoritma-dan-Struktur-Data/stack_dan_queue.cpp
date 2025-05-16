#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main() {
    stack<int> s;
    s.push(1); s.push(2); s.push(3);
    cout << "Stack (top to bottom): ";
    while (!s.empty()) {
        cout << s.top() << " "; s.pop();
    }
    cout << endl;

    queue<int> q;
    q.push(1); q.push(2); q.push(3);
    cout << "Queue (front to back): ";
    while (!q.empty()) {
        cout << q.front() << " "; q.pop();
    }
    cout << endl;
    return 0;
}

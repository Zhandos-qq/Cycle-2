#include <iostream>
using namespace std;

int main() {
    long long A;
    cin >> A;

    if (A == 0) {
        cout << 0;
        return 0;
    }

    long long a = 0, b = 1, c = 1;
    int n = 1;

    while (c < A) {
        c = a + b;
        a = b;
        b = c;
        n++;
    }

    if (c == A)
        cout << n;
    else
        cout << -1;

    return 0;
}

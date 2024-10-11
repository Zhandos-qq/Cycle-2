#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << 0;
        return 0;
    }

    long long a = 0, b = 1, c;
    int i = 2;

    while (i <= n) {
        c = a + b;
        a = b;
        b = c;
        i++;
    }

    cout << b;
    return 0;
}

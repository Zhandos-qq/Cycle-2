#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    while (A > B) {
        if (A % 2 == 0 && A / 2 >= B) {
            cout << ":2" << endl;
            A /= 2;
        } else {
            cout << "-1" << endl;
            A--;
        }
    }

    return 0;
}

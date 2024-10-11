#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int k = 0; 
    int a = 1; 
    while (a < N) {
        a = 2; 
        k++; 
    }
    cout << k << endl;
    return 0;
}

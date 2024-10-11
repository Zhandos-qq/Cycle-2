#include <iostream>
using namespace std;

int main() {
    int x, y;
    float p;
    cin >> x >> p >> y; 
    int years = 0;  
    while (x < y) {
        x += (x * p) / 100;  
        years++;  
    }
    
    cout << years << endl; 
    return 0;
}

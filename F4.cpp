#include <iostream>
using namespace std;

int main() {
    double x, y;
    cin >> x >> y;  
    
    int d = 1;  
    double n = x; 
    
    while (n < y) {
        n *= 1.1;  
        d++;  
    }
    
    cout << d<< endl;  
    return 0;
}

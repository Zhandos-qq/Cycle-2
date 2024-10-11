#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int N;
    cin >> N;

    while(N > 1){
        if (N % 2 !=0){
            cout << "NO";
            return 0;
        }
        N=N/2;
        }
    
    cout << "YES";
        
    
    
    
    return 0;
}
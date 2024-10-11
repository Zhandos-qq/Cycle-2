#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int N,a=1;
    cin >> N;
    while(a*a<=N){
    cout << a*a << " ";
        a++;
    }
    
    return 0;
}
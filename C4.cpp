#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int N,a=1;
    cin >> N;
    while(pow(2,a)<=N){
    cout << pow(2,a) << " ";
        a++;
    }
    return 0;
}
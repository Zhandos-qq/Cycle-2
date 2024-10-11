#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int N,a=3;
    cin >> N;
    if (N%2==0){
        a=2;
    }else{

    while (N%a!=0){
        a+=2;
    }
    }
    cout<<a;
    
    return 0;
}
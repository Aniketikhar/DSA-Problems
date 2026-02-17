#include <iostream>
using namespace std;

int main() {
    int n = 15;
    int flag = 0;
    
    for (int i = 1; i <= n; i++){
        if(i % n == 0){
            flag = 1;
        }
    }
    if(flag){
            cout << "this is not prime no. "<< n;
    }else{
            cout << "this is a prime no. "<< n;
    }
    return 0;
}
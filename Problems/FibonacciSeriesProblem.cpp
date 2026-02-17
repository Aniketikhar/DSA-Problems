#include <iostream>
using namespace std;

// 0 1 1 2 3 5 8 13 21 34 55 89 

int main() {
    int n = 10;
    int a = 0;
    int b = 1;
    int sum = 0;
    cout << "0 1 ";
    for (int i = 1; i <= n; i++){
        sum = a + b;
        a = b;
        b = sum;
        cout << sum << " ";
    }
    return 0;
}
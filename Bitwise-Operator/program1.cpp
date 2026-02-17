#include <iostream>
using namespace std;

// a&b 2
//  a|b 3
//  ~a -3
//  a^b 1

int main() {
    int a = 2;
    int b = 3;
    
    cout << " a&b " << (a&b) << endl;
    cout << " a|b " << (a|b) << endl;
    cout << " ~a " << (~a) << endl;
    cout << " a^b " << (a^b) << endl;
    
    return 0;
}
#include <iostream>
using namespace std;

// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 

int main() {
    int n = 5;
    int count = 1;
    for(int i = 1 ; i < n; i++){
        cout << "// " ;
        for ( int j = 1; j <= i; j++){
            cout << count++ << " ";
        }
        cout << endl;
    }
    
    return 0;
}
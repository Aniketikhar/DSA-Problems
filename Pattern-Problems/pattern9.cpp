#include <iostream>
using namespace std;

// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 

int main() {
    int n = 5;
    int count = 1;
    for(int i = 1 ; i < n; i++){
        count = i;
        cout << "// " ;
        for ( int j = 1; j <= i; j++){
            cout << count-- << " ";
        }
        cout << endl;
    }
    
    return 0;
}
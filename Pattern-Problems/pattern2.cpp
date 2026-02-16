#include <iostream>
using namespace std;

 // 5 4 3 2 1 
 // 5 4 3 2 1 
 // 5 4 3 2 1 
 // 5 4 3 2 1 
 // 5 4 3 2 1 



int main() {
    int n = 5;
    
    for(int i=1; i <= n; i++){
        cout << " // ";
        for(int j=1; j <= n; j++){
            cout << n - j + 1 << " " ;
        }
        cout << endl;
    }
    
    
    return 0;
}
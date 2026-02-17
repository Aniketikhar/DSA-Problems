#include <iostream>
using namespace std;

// A B C D 
// A B C D 
// A B C D 
// A B C D 

int main() {
    int n = 5;
    for(int i = 1; i < n; i++){
        char ch = 'A';
        cout << "// ";
        for(int j = 1; j < n; j++){
            cout << ch++ << " ";
        }
        cout << endl;
    }
    

    return 0;
}
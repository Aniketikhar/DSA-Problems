#include <iostream>
using namespace std;

// find duplicate
// { 1,2,4,3,4,5}

// output shoult be : 4



void findDuplicate(int arr[], int n){
     
    int ans = 0;
    
    for(int i = 0; i < n; i++){
        ans = ans ^ arr[i];
        cout << ans << endl << endl;
    }
    
    for(int j = 1; j < n; j++){
        
        ans = ans ^ j;
        cout << ans << endl;
    }
    
    cout << "duplicate element is " << ans;


}

int main() {
    int arr[6] = { 1,2,4,3,4,5};
    
    findDuplicate(arr, 6);


    return 0;
}
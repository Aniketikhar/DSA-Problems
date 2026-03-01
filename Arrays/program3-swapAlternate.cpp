#include <iostream>
using namespace std;

// output: swap aleternate
// { 1, 2, 3,4,5,6}
// {2,1,4,3,6,5}

void printArr(int arr[], int n){
    
    for(int i = 0; i <n; i++){
        cout << arr[i];
    }
    cout << endl;
}


void swapAlternate(int arr[], int n){
     
    int first = 0;
    int second = 1;
    
    while(second < n){
        swap(arr[first], arr[second]);
        first = first + 2;
        second = second + 2;
    }
}




int main() {
    int arr[6] = {3,4,2,5,1,8};
    
    printArr(arr, 6);
    
    swapAlternate(arr, 6);
    
    printArr(arr, 6);

    return 0;
}
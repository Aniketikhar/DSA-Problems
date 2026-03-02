
#include <iostream>
#include <vector>
using namespace std;

// Array of Intersection
// {1,2,3,4,4,5};
// {1,2,6};

// Output: 1, 2



vector<int> arrIntersection(int arr1[],int n,int arr2[],int m){
    vector<int> ans;
    int i = 0;
    int j = 0;
    
    
    while(i < n && j < m){
        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }else if(arr1[i] < arr2[j]){
            i++;
        }else{
            j++;
        }
    }

    for(int k=0; k < ans.size(); k++){
        cout << ans[k] << " ";
    }
    return ans;
}



int main() {
    int arr1[6] = {1,2,3,4,4,5};
    int arr2[3] = {1,2,6};
    
    arrIntersection(arr1, 6, arr2, 3);

    return 0;
}
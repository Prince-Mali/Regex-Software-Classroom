// Check if array is sorted ---

#include <bits/stdc++.h>
using namespace std;

// T.C=O(n), S.C=O(1) 
// bool isSorted(vector<int> &arr) {
//     for(int i=0; i<arr.size()-1; i++){
//         if(arr[i] > arr[i+1]) return false;
//     }

//     return true;
// }

// T.C=O(2n)=O(n), S.C=O(1)
// bool isSorted(vector<int> &arr) {
//     bool increasing = true;
//     bool decreasing = true;
//     for(int i=0; i<arr.size()-1; i++){
//         if(arr[i] > arr[i+1]) increasing = false;
//         if(arr[i] < arr[i+1]) decreasing = false;
//     }
    
//     return increasing || decreasing;

//     // bool isSorted = true;
//     // for(int i=0; i<arr.size()-1; i++){ // for checking increasing order --
//     //     if(arr[i] > arr[i+1]) isSorted = false;
//     // }
//     // if(!isSorted){
//     //     isSorted = true;
//     //     for(int i=0; i<arr.size()-1; i++){ // for checking decreasing order --
//     //         if(arr[i] < arr[i+1]) isSorted = false;
//     //     }
//     // }
//     // return isSorted;
// }

int main() {
    vector<int> arr = {1,2,3,4};

    cout << isSorted(arr);
}

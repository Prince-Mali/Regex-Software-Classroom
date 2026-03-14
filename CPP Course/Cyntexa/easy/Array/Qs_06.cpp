// Reverse an Array ---

#include <bits/stdc++.h>
using namespace std;

// // T.C.=O(n/2)=O(n), S.C.=O(1)
// void reverseArr(vector<int> &arr) { // by reference (update actual array in memory)
//     int i = 0;
//     int j = arr.size()-1;

//     while(i<j){
//         swap(arr[i], arr[j]);
//         i++;
//         j--;
//     }
// }

// T.C=O(n), S.C=O(n)
vector<int> reverseArr(vector<int> arr) { // call by value (return a new reversed array)

    int i = 0;
    int j = arr.size()-1;

    while(i<j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    return arr;
    
    // vector<int> revArr(arr.size());
    // int index = arr.size()-1;
    // for(int num: arr){
    //     revArr[index] = num;
    //     index--;
    // }
    // return revArr;
}

int main() {
    vector<int> arr = {4,5,7,1,2};

    // reverseArr(arr);
    // for(int num: arr) {
    //     cout << num << " ";
    // }

    vector<int> revArr = reverseArr(arr);

    for(auto num: revArr) {
        cout << num << " ";
    }
}
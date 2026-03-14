// find maximum element in array ---

#include <bits/stdc++.h>
using namespace std;

// T.C=O(n), S.C=O(1) 
int findMaxElement(vector<int> &arr) {
    if(arr.size() == 0) return -1;

    int maxEl = arr[0];

    for(int i=1; i<arr.size(); i++){
        if(maxEl < arr[i]) maxEl = arr[i];
    }

    return maxEl;
}

int main() {
    vector<int> arr = {5,7,8,4,6};

    cout << findMaxElement(arr);
}
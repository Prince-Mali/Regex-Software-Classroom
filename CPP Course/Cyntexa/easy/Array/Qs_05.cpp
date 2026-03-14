// Linear Search in array ---

#include <bits/stdc++.h>
using namespace std;

// T.C=O(n), S.C.=O(1)
int linearSearch(vector<int> &arr, int target) {
    for(int i=0; i<arr.size(); i++){
        if(target == arr[i]) return i;
    }

    return -1;
}

int main() {
    vector<int> arr = {4,5,6,8,7,2};

    cout << linearSearch(arr, 8);
}

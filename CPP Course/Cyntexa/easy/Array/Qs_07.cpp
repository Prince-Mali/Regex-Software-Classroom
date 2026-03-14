// Count Even and Odd Numbers in array ---

#include <bits/stdc++.h>
using namespace std;

// call by Reference, T.C=O(n), S.C=O(1);
void countEvenOddNumber(vector<int> &arr) {
    int evenCount = 0;
    int oddCount = 0;

    for(auto num: arr) {
        if(num%2 == 0) evenCount++;
        else oddCount++;
    }

    cout << "Even Number count: " << evenCount << endl;
    cout << "Odd Number count: " << oddCount;
}

int main() {
    vector<int> arr = {1,5,4,7,8,2};

    countEvenOddNumber(arr);
}
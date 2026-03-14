// Sum of All Elements of array ----

#include <bits/stdc++.h>
using namespace std;

// Call by reference -- T.C=O(n), S.C=O(1)
int sumOfElement(vector<int> &arr) {
    int sum = 0;

    for(auto num: arr) {
        sum += num;
    }

    return sum;
}

int main() {
    vector<int> arr = {1,2,3,4,5};

    cout << sumOfElement(arr);
}
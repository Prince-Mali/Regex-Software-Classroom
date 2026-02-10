#include <bits/stdc++.h>
using namespace std;

void printVal(vector<int> v, int idx) {
    if(v.size() == idx) return;

    cout << v[idx] << " ";
    printVal(v, idx+1);
}

void printReverse(vector<int> v, int idx) {
    if(idx < 0) return;
    cout << v[idx] << " ";
    printReverse(v, idx-1);
}

int main() {
    vector<int> v = {12, 34, 42, 44};
    // printVal(v, 0);
    printReverse(v, v.size() -1);
}

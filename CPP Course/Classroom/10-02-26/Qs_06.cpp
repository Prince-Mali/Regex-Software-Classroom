#include <bits/stdc++.h>
using namespace std;

int countVal(vector<int> v, int idx) {
    if(v.size() == idx) return 0;
    
    return 1 + countVal(v, idx + 1);
}

int main() {
    vector<int> v = {1,2,3,4,5};
    cout << countVal(v, 0);
}

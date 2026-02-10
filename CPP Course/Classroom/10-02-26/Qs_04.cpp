#include <bits/stdc++.h>
using namespace std;

int countEven(vector<int> v, int idx) {
    if(v.size() == idx) return 0;

    return ((v[idx]%2 == 0) ? 1 : 0) + countEven(v, idx+1);   
}

int main() {
    vector<int> v = {1,2,3,4,5};
    cout << countEven(v, 0);
}

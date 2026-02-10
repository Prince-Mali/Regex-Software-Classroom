#include <bits/stdc++.h>
using namespace std;

void updateV(vector<int> &v, int idx) {
    if(idx == v.size()) return;
    else {
        v[idx] = -1;
    }

    updateV(v, idx+1);
}

int main() {
    vector<int> v = {12, 34, 42, 44};

    updateV(v, 0);

    for(auto val: v) {
        cout << val << " ";
    }
}

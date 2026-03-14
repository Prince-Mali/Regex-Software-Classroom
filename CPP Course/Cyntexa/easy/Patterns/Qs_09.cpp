// Pattern - 0–1 pattern ----

#include <bits/stdc++.h>
using namespace std;

void printPattern(int n) {
    int num = 1;
    for(int i=0; i<n; i++) {
        int val = num;
        for(int j=0; j<i+1; j++) {
            cout << val << " ";
            val = (val) ? 0 : 1;
        }
        num = (num) ? 0 : 1;
        cout << endl;
    }
}

int main() {
    int n = 5;

    printPattern(n);
}
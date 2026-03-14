// Pattern - Floyd’s triangle ----

#include <bits/stdc++.h>
using namespace std;

void printPattern(int n) {
    int num = 1;
    for(int i=0; i<n; i++) {
        for(int j=0; j<i+1; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

int main() {
    int n = 4;

    printPattern(n);
}
// Pattern - Inverted right angle star triangle ----

#include <bits/stdc++.h>
using namespace std;

void printPattern(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i; j++){
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n = 4;

    printPattern(n);
}
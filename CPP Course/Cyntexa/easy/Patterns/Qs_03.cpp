// Pattern - Pyramid pattern (spaces + stars) ---

#include <bits/stdc++.h>
using namespace std;

void printPattern(int n) {
    for(int i=0; i<n; i++){
        // spaces ---
        for(int j=0; j<n-i; j++){
            cout << " ";
        }

        // * ---
        for(int j=0; j<i+1; j++){
            cout << "* ";
        }

        // * ---
        // for(int j=0; j<(i*2)+1; j++){
        //     cout << "*";
        // }

        cout << endl;
    }
}

int main() {
    int n = 4;

    printPattern(n);
}
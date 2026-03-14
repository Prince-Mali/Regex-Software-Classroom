// Pattern - Diamond pattern ----

#include <bits/stdc++.h>
using namespace std;

void printPattern(int n) {
    // top ---
    for(int i=0; i<n; i++){
        // spaces ---
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }

        // * ---
        cout << "*";

        if(i!=0) {
            // spaces ---
            for(int j=0; j<i*2-1; j++){
                cout << " ";
            }
    
            // * ---
            if(i!=0) cout << "*";
        }

        // newline ---
        cout << endl;
    }

    // bottom --
    for(int i=0; i<n-1; i++) {
        // spaces ---
        for(int j=0; j<i+1; j++){
            cout << " ";
        }

        // * ---
        cout << "*";

        if(i!=n-2) {
            // spaces ---
            for(int j=0; j<(n-i-2)*2 - 1; j++){
                cout << " ";
            }

            // * ---
            cout << "*";
        }

        // newLine ---
        cout << endl;
    }
}

int main() {
    int n = 4;

    printPattern(n);
}
// Pattern - Reverse number triangle ---

#include <bits/stdc++.h>
using namespace std;

void printPattern(int n) {
    for(int i=n; i>0; i--){
        for(int j=0; j<=n-i; j++){
            cout << n-j << " ";
        }

        cout << endl;
    }
}

int main() {
    int n = 4;

    printPattern(n);
}

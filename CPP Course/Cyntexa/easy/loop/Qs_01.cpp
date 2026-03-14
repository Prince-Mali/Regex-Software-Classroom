// Print table of a number ---

#include <bits/stdc++.h>
using namespace std;

// T.C.=O(n), S.C.=O(1)
void printTable(int num, int limit) {
    if(limit <= 0) return;
    
    for(int i=1; i<=limit; i++) {
        cout << num << " * " << i << " = " << num * i << endl;
    }
}

int main() {
    int num = 2;

    printTable(num, 10);
}
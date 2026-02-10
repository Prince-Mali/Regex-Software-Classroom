// Recusion function --

#include <bits/stdc++.h>
using namespace std;

void printUp(int n) {
    if(n>10) return;
    cout << n << " ";
    printUp(n+1);
}

void printDown(int n) {
    if(n<1) return;
    cout << n << " ";
    printDown(n-1);
}

int main() {
    // printUp(1);
    printDown(10);
    return 0;
}
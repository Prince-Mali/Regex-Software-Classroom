// Check Prime Number ---

#include <bits/stdc++.h>
using namespace std;

// T.C.=O(sqrt(n)), S.C.=O(1)
bool isPrimeNumber(int num) {
    if(num <= 1) return false;

    int i = 2;
    while(i * i <= num) {
        if(num % i == 0) return false;
        i++;
    }

    return true;
}

int main() {
    int num = 2;

    cout << isPrimeNumber(num);
}
// Reverse a Number ---

#include <bits/stdc++.h>
using namespace std;

// T.C.=O(log10 n), S.C.=O(1)
int reverseNumber(int num) {
    int revNum = 0;

    while(num != 0) {
        int digit = num % 10;
        if(revNum > INT_MAX / 10 || (revNum == INT_MAX / 10 && digit > 7)) return 0;
        if(revNum < INT_MIN / 10 || (revNum == INT_MIN / 10 && digit < -8)) return 0;

        revNum = revNum * 10 + digit;
        num /= 10;
    }

    return revNum;
}

int main() {
    int num = 2548;

    cout << reverseNumber(num);
}
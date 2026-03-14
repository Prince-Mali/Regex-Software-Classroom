// Sum of Digits ---

#include <bits/stdc++.h>
using namespace std;

// T.C.=O(log10 n), S.C.=O(1)
int sumOfDigits(int num) {
    if(num < 0) num = abs(num);

    int sumOfDigit = 0;

    while(num > 0) {
        sumOfDigit += num%10;
        num /= 10;
    }

    return sumOfDigit;
}

int main() {
    int num = -4235;

    cout << sumOfDigits(num);
}
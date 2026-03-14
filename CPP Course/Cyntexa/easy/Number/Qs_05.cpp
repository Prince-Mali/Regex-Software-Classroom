// Count Number of Digits ---

#include <bits/stdc++.h>
using namespace std;

// T.C.=O(log10 n) == (number of digit), S.C.=O(1)
int countDigits(int num) {
    if(num == 0) return 1;

    if(num < 0) num = abs(num);
    int count = 0;

    while(num != 0) {
        count++;
        num /= 10;
    }

    return count;
}

int main() {
    int num = -5874;

    cout << countDigits(num);
}
#include <bits/stdc++.h>
using namespace std;

// void reverseNum(int num, int &rev) {
//     if(num == 0) return rev;

//     rev = rev * 10 + num%10;
//     reverseNum(num/=10, rev);
//     return rev;
// }

int reverseNum(int num, int rev) {
    if(num==0) return rev;

    rev = rev * 10 + num%10;
    return reverseNum(num/10, rev);
}

int main() {
    int num = 123, rev = 0;

    cout << reverseNum(num, rev);
}

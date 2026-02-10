#include <bits/stdc++.h>
using namespace std;

// int countDigit(int n) {
//     n = abs(n);
//     if(n<=9) return 1;

//     return 1 + countDigit(n/=10);
// }

int countDigit(string num, int idx){
    if(num.length() == idx) return 0;

    return (isdigit(num[idx]) ? 1 : 0) + countDigit(num, idx + 1);
}

int main() {
    string num;
    cout << "Enter number: ";
    cin >> num;

    cout << countDigit(num, 0);
}

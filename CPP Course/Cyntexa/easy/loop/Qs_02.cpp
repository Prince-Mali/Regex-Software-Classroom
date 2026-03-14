// Factorial using loop ---

#include <bits/stdc++.h>
using namespace std;

// T.C.=O(n), S.C.=O(1)
// int getFactorial(int num) {
//     if(num < 0) return -1;
//     if(num == 0) return 1;

//     int fact = 1;
//     while(num > 1) {
//         fact *= num;
//         num--;
//     }

//     return fact;
// }

// T.C.=O(n), S.C.=O(n) n = num times
int getFactorial(int num) {
    if(num < 0) return -1;
    if(num == 1 || num == 0) return 1;
    
    return num * getFactorial(num - 1);
}

int main() {
    int num = 5;

    cout << getFactorial(num);
}
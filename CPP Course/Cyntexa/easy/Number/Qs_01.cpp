// Check Palindrome Number ---

#include <bits/stdc++.h>
using namespace std;

// T.C.=O(log₁₀ n), S.C.=O(1)
// bool isPalindromeNum(int num) { 20
//     if(num < 0 || (num%10 == 0 && num!=0)) return false;

//     int temp = num;
//     int revNum = 0;
    
//     while(temp!=0) {
//         revNum = revNum*10 + temp%10;
//         temp/=10;
//     }

//     return revNum == num;
// }

// T.C.=O(log₁₀ n), S.C.=O(1)
bool isPalindromeNum(int num) {
    if(num < 0 || (num % 10 == 0 && num != 0)) return false;

    int revNum = 0;
    while(num > revNum) { // half reverse only -- 
        revNum = revNum * 10 + num % 10;
        num /= 10; 
    }

    return num == revNum || num == revNum / 10;
}


int main() {
    int num = 121;

    cout << isPalindromeNum(num);
}
// Swap Two Number (without 3rd variable) ---

#include <bits/stdc++.h>
using namespace std;

// Call by reference --
// T.C.=O(1), S.C.=O(1)
// void swapNumber(int &num1, int &num2) {
//     num1 = num1 + num2;
//     num2 = num1 - num2;
//     num1 = num1 - num2;
// }

// using XOR --
// T.C.=O(1), S.C.=O(1)
void swapNumber(int &num1, int &num2) {
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
}

// Call by value ---
// T.C.=O(1), S.C.=O(1)
// void swapNumber(int num1, int num2) {
//     num1 = num1 + num2;
//     num2 = num1 - num2;
//     num1 = num1 - num2;

//     cout << "num 1: " << num1 << endl;
//     cout << "num 2: " << num2 << endl;
// }

int main() {
    int num1 = 5;
    int num2 = 10;

    swapNumber(num1, num2);

    cout << "num 1: " << num1 << endl;
    cout << "num 2: " << num2 << endl;
}
// Swap Two Numbers (with 3rd variable) ---

#include <bits/stdc++.h>
using namespace std;

// call by reference ---
// T.C.=O(1), S.C.=O(1)
// void swapNumber(int &num1, int &num2) {
//     int temp = num1;
//     num1 = num2;
//     num2 = temp;
// }

// call by value ---
// T.C.=O(1), S.C.=O(1)
void swapNumber(int num1, int num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "num 1: " << num1 << endl;
    cout << "num 2: " << num2 << endl;
}

int main() {
    int num1 = 5;
    int num2 = 10;

    swapNumber(num1, num2);
    cout << "num 1: " << num1 << endl;
    cout << "num 2: " << num2 << endl;
}

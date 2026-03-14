// Fibonacci Series ---

#include <bits/stdc++.h>
using namespace std;

// T.C.=O(n), S.C.=(n) n = size,length
// string getFiboSeries(int num) {
//     if(num == 0) return "";
//     if(num == 1) return "0";
//     if(num == 2) return "01";

//     string fibo = "01";
//     int first = 0, second = 1;
//     while(num > 2) {
//         int third = first + second;
//         first = second;
//         second = third;

//         fibo += to_string(third);
//         num--;
//     }

//     return fibo;
// }

// T.C. = O(n), S.C.=O(1)
// void printFiboSeries(int num) {
//     cout << "Fibonacci Series: ";

//     if(num == 0) return;

//     if(num == 1) {
//         cout << "0";
//         return;
//     }

//     int i = 0, j = 1;
//     cout << i << " " << j << " ";
//     while(num > 2) {
//         int sum = i + j;
//         cout << sum << " ";
//         i = j;
//         j = sum;
//         num--;
//     }
// }

// Using recursive function ---
// T.C.=O(n), S.C.=O(n)
void printFiboSeries(int num, int first = 0, int second = 1) {
    if(num == 0) return;

    cout << first << " ";
    printFiboSeries(num - 1, second, first + second);
}

int main() {
    int num = 4;

    // cout << getFiboSeries(num);
    printFiboSeries(num);
}

// Find Greatest of Three Number ---

#include <bits/stdc++.h>
using namespace std;

// int findGreatestNumber(int num1, int num2, int num3) {
//     return (num1 > num2)
//         ? ((num1 > num3) ? num1 : num3)
//         : ((num2 > num3) ? num2 : num3);
// }

int findGreatestNumber(int num1, int num2, int num3) {
    if(num1 > num2 && num1 > num3) return num1;
    if(num2 > num3 && num2 > num1) return num2;
    return num3;
}

int main() {
    int num1 = 2, num2 = 5, num3 = 8;

    cout << findGreatestNumber(num1, num2, num3);
}
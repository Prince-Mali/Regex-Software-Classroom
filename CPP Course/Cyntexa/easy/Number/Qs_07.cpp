// Check Even or Odd Number ---

#include <bits/stdc++.h>
using namespace std;

// T.C.=O(1), S.C.=O(1)
string isEvenNumber(int num) {
    return (num % 2 == 0) ? "even" : "odd";
}

int main() {
    int num = 5;

    cout << isEvenNumber(num);
}

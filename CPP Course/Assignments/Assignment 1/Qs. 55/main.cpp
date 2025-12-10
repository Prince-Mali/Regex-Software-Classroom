#include <bits/stdc++.h>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter 10 integer values: ";
    for(int i=0; i<10; i++){
        cin >> num;
        sum += num;
    }

    cout << "Sum of integer values: " << sum;

    return 0;
}
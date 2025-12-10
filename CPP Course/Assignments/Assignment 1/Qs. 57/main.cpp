#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;

    if(num%10 == 0){
        cout << num << " is a multiple of 10.";
    }else {
        cout << num << " is not a multiple of 10.";
    }

    return 0;
}
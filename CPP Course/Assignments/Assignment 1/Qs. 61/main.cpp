#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;

    cout << "Enter number: ";
    cin >> num;

    if(num <= 1){
        cout << num << " is not a prime number";
        return 0;
    }

    int is_prime = 1;
    for(int i=2; i<num; i++){
        if(num%i == 0){
            is_prime = 0;
        }
    }

    if(is_prime){
        cout << num << " is a prime number";
    }else {
        cout << num << " is not a prime number";
    }

    return 0;
}
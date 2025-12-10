#include <bits/stdc++.h>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter 10 integer values: ";
    for(int i=0; i<10; i++){
        cin >> num;

        if(num%2 == 0){
            sum += num;
        }
    }

    cout << "Sum of given even numbers: " << sum;

    return 0;
}
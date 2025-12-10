#include <bits/stdc++.h>
using namespace std;

int main() {
    float num, sum = 0;

    cout << "Enter floating numbers: ";
    for(int i=0; i<4; i++){
        cin >> num;
        sum += num;
    }

    float average = sum/4;

    cout << "Average of given floating numbers: " << average;

    return 0;
}
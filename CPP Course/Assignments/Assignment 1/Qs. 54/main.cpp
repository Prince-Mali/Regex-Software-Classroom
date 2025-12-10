#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;

    if(num%3==0 && num%5==0){
        cout << "yes";
    }else{
        cout << "no";
    }
    
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int countEven(int n) {
    if(n<=9){
        if(n%2==0) return 1;
        else return 0;
    }
    
    int num = n%10;
    return ((num%2==0 ? 1 : 0) + countEven(n/10));
}

int main() {
    int n = 3270;
    cout << countEven(n);
}

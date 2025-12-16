#include <bits/stdc++.h>
using namespace std;

int main() {
    // string str = "hel89";
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int count = 0;
    for(int i=0; i<str.length(); i++){
        if(isdigit(str[i])){
            count++;
        }
    }

    cout << "Total number of digits in string: "<< count;

    return 0;
}
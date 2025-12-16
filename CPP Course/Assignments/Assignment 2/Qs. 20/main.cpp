#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int count = 0;
    for(char ch: str){
        if(!isspace(ch)){
            count++;
        }
    }

    cout << "Total characters in string excluding spaces is: " << count;

    return 0;
}
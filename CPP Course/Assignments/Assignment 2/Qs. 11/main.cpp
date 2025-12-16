#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int count = 0;
    for(char ch: str){
        if(isupper(ch)){
            count++;
        }
    }

    cout << "Total uppercase characters in string: " << count;

    return 0;
}

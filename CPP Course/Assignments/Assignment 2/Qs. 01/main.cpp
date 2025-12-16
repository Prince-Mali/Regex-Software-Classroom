#include <bits/stdc++.h>
using namespace std;

int main() {
    // string str = "hello";
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int i = 0;
    int j = str.length() - 1;
    char temp;

    while (i<j){
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;

        i++;
        j--;
    }

    cout << "Reversed string: " << str;
    
    return 0;
}
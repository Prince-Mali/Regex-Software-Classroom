#include <bits/stdc++.h>
using namespace std;

int main() {
    // string str = "helofnw845/@3n$#";
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int count = 0;
    for(char ch: str){
        if(!isalpha(ch) && !isdigit(ch) && ch != ' '){
            count++;
        }
    }

    cout << count;

    return 0;
}

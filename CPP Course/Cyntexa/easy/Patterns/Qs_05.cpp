// Pattern - Hollow Rectangle ---

#include <bits/stdc++.h>
using namespace std;

void printPattern(int row, int col) {
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            if(j == 0 || i == 0 || j == col-1 || i == row-1){
                cout << "*";
            }else cout << " ";
        }

        cout << endl;
    }
}

int main() {
    int row = 4, col = 8;
    printPattern(row, col);
}
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;

    int root = floor(sqrt(num));
    if(root*root == num){
        cout << "Given number is a perfect square.";
    }else {
        cout << "Given number is not a perfect square";
    }
}
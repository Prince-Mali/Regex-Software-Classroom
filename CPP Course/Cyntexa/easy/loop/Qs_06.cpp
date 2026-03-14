// Simple Calculater using switch case ---

#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "-------Calculator-------" << endl;
    cout << "Select Operation: " << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Division" << endl;
    cout << "4. Multiplication" << endl;

    int operation;
    cout << "Enter Option: ";
    cin >> operation;

    int num1, num2;
    cout << "Enter num 1: ";
    cin >> num1;
    cout << "Enter num 2: ";
    cin >> num2;

    switch (operation){
        case 1:
            cout << "Sum of " << num1 << " and " << num2 << " is: " << num1 + num2;
            break;
        
        case 2:
            cout << "Subtraction of " << num1 << " and " << num2 << " is: " << num1 - num2;
            break;

        case 3:
            cout << "Division of " << num1 << " and " << num2 << " is: " << (float)num1 / num2;
            break;
        
        case 4:
            cout << "Multiplication of " << num1 << " and " << num2 << " is: " << num1 * num2;
            break;

        default:
            cout << "Select Valid Operation!!!";
            break;
    }
}
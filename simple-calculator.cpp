#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter the second number: ";
    cin >> num2;

    if (op == '+') {
        cout << "Result = " << num1 + num2;
    }
    else if (op == '-') {
        cout << "Result = " << num1 - num2;
    }
    else if (op == '*') {
        cout << "Result = " << num1 * num2;
    }
    else if (op == '/') {
        if (num2 != 0) {
            cout << "Result = " << num1 / num2;
        }
        else {
            cout << "Error: Cannot divide by zero!";
        }
    }
    else {
        cout << "Invalid operator!";
    }

    return 0;
}

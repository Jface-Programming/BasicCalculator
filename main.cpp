#include <iostream>
using namespace std;

int main() {
    double num1;
    double num2;
    char op;
    bool loop = true;
    while (loop == true) {
        cout << "enter the first number: ";
        cin >> num1;
        cout << endl;
        cout << "enter the second number: ";
        cin >> num2;
        cout << endl;
        cout << "enter the operation + * - /: ";
        cin >> op;
        cout << endl;
        switch (op) {
            case '+':
                cout << num1 + num2 << endl;
            break;
            case '-':
                cout << num1 - num2 << endl;
            break;
            case '*':
                cout << num1 * num2 << endl;
            break;
            case '/':
                cout << num1 / num2 << endl;
            break;
            default:
                cout << "please enter a valid operation." << endl;
        }
    }
    return 0;
}
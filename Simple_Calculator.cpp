#include<iostream>
using namespace std;

int main() {
    int a, b;
    char op;
    cout << "Enter two integers followed by an operator (+, -, *, /): " << endl;
    cout << "Example: 5 + 6" << endl;
    cin >> a >> op >> b;
    switch (op) {
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            cout << a / b << endl;
            break;
        default:
            cout << "Invalid operator" << endl;
    }
    return 0;
}
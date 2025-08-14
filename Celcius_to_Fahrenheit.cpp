#include<iostream>
using namespace std;
int main() {
    double celsius, fahrenheit;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 1.8) + 32;

    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    return 0;
}
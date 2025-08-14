#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double principal, rate, time, amount, compoundInterest;
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest: ";
    cin >> rate;
    cout << "Enter time in years: ";
    cin >> time;
    cout << "Enter number of times interest applied per time period: ";
    int n;
    cin >> n;
    compoundInterest = principal * pow((1 + (rate / 100) / n), n * time) - principal;
    cout << "Compound Interest is: " << compoundInterest << endl;
    cout << "Total Amount = " << amount << endl;
    return 0;
}
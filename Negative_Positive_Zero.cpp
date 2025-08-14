#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n > 0) {
        cout << "Positive" << endl;
    } else if (n < 0) {
        cout << "Negative" << endl;
    } else {
        cout << "Zero" << endl;
    }

    return 0;
}
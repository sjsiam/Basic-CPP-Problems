#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double d = b*b - 4*a*c;
    if (d > 0) {
        double r1 = (-b + sqrt(d)) / (2*a);
        double r2 = (-b - sqrt(d)) / (2*a);
        cout << r1 << " " << r2;
    } else if (d == 0) {
        double r = -b / (2*a);
        cout << r;
    } else {
        double realPart = -b / (2*a);
        double imagPart = sqrt(-d) / (2*a);
        cout << realPart << "+" << imagPart << "i ";
        cout << realPart << "-" << imagPart << "i";
    }
    return 0;
}

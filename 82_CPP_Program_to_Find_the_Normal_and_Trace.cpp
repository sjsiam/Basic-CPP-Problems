#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int mat[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) cin >> mat[i][j];
    int trace = 0;
    double norm = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            if (i == j) trace += mat[i][j];
            norm += mat[i][j] * mat[i][j];
        }
    cout << "Trace: " << trace << " Norm: " << sqrt(norm);
    return 0;
}

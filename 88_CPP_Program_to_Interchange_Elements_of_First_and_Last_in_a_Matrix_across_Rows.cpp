#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    int mat[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) cin >> mat[i][j];
    for (int i = 0; i < r; i++) swap(mat[i][0], mat[i][c-1]);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) cout << mat[i][j] << " ";
        cout << endl;
    }
    return 0;
}

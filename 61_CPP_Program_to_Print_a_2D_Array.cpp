#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;
    int arr[rows][cols];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> arr[i][j];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}

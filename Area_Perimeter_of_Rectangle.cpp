#include<iostream>
using namespace std;
int main() {
    float length, width, area, perimeter;
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    area = length * width;
    perimeter = 2 * (length + width);
    cout << "Area of the rectangle: " << area << endl;
    cout << "Perimeter of the rectangle: " << perimeter << endl;
    return 0;
}
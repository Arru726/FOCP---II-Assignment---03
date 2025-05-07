#include <iostream>
using namespace std;

int area(int side) {
    return side * side;
}

int area(int l, int w) {
    return l * w;
}

double area(double r) {
    return 3.14159 * r * r;
}

int main() {
    cout << area(5) << endl;
    cout << area(4, 6) << endl;
    cout << area(3.5) << endl;
    return 0;
}

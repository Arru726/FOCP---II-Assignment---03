#include <iostream>
using namespace std;

int maxNumber(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Maximum is: " << maxNumber(x, y) << endl;
    return 0;
}

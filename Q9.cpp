#include <iostream>
using namespace std;

class Calculator {
public:
    int sum(int a, int b) {
        return a + b;
    }

    double sum(double a, double b, double c) {
        return a + b + c;
    }

    float sum(int a, float b) {
        return a + b;
    }
};

int main() {
    Calculator c;
    cout << c.sum(3, 4) << endl;
    cout << c.sum(1.5, 2.5, 3.5) << endl;
    cout << c.sum(10, 2.5f) << endl;
    return 0;
}

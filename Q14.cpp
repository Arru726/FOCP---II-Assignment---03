#include <iostream>
using namespace std;

int power(int base, int exp) {
    int result = 1;
    for(int i = 0; i < exp; i++)
        result *= base;
    return result;
}

double power(double base, int exp) {
    double result = 1;
    for(int i = 0; i < exp; i++)
        result *= base;
    return result;
}

int main() {
    cout << power(2, 3) << endl;
    cout << power(2.5, 2) << endl;
    return 0;
}

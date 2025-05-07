#include <iostream>
using namespace std;

void reverseDigits(int n) {
    if(n == 0) return;
    cout << n % 10;
    reverseDigits(n / 10);
}

int main() {
    int n = 1234;
    reverseDigits(n);
    return 0;
}

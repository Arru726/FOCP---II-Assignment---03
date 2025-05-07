#include <iostream>
using namespace std;

int fibonacci(int n) {
    if(n <= 1) return n;
    int a = 0, b = 1, temp;
    for(int i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

int main() {
    int n;
    cout << "Enter term number: ";
    cin >> n;
    cout << "Fibonacci term: " << fibonacci(n) << endl;
    return 0;
}

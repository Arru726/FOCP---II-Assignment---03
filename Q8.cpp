#include <iostream>
using namespace std;

void print(string s) {
    cout << s << endl;
}

void print(int n) {
    cout << n << endl;
}

void print(string s, int n) {
    cout << s << " " << n << endl;
}

int main() {
    print("Hello");
    print(100);
    print("Age", 20);
    return 0;
}

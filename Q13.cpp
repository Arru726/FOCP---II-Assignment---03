#include <iostream>
using namespace std;

string concat(string a, string b) {
    return a + b;
}

string concat(int a, string b) {
    return to_string(a) + b;
}

int main() {
    cout << concat("Hello", "World") << endl;
    cout << concat(2025, "Year") << endl;
    return 0;
}

#include <iostream>
using namespace std;

void greet() {
    cout << "Hello!" << endl;
}

void greet(string name) {
    cout << "Hello, " << name << "!" << endl;
}

void greet(string name, int age) {
    cout << "Hello, " << name << "! You are " << age << " years old." << endl;
}

int main() {
    greet();
    greet("Alice");
    greet("Bob", 25);
    return 0;
}

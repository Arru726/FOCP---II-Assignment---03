#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int rev = 0;
    while(n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

bool isPalindrome(int n) {
    return n == reverseNumber(n);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(isPalindrome(num))
        cout << "Palindrome" << endl;
    else
        cout << "Not a palindrome" << endl;
    return 0;
}

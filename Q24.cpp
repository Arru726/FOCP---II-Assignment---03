#include <iostream>
using namespace std;

void updateElement(int &x) {
    x = x * 2;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    updateElement(arr[2]);
    for(int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    return 0;
}

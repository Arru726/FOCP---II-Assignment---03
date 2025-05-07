#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int arr[] = {1, 2, 3, 4};
    swap(arr[0], arr[3]);
    for(int i = 0; i < 4; i++)
        cout << arr[i] << " ";
    return 0;
}

#include <iostream>
using namespace std;

void printAll(int arr[], int size) {
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int nums[] = {1, 2, 3, 4, 5};
    printAll(nums, 5);
    return 0;
}

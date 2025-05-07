#include <iostream>
using namespace std;

int findMin(int arr[], int size) {
    int min = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] < min)
            min = arr[i];
    }
    return min;
}

int main() {
    int arr[5] = {8, 4, 6, 1, 9};
    cout << "Minimum: " << findMin(arr, 5) << endl;
    return 0;
}

#include <iostream>
using namespace std;

int findMax(int arr[], int size) {
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main() {
    int arr[5] = {3, 7, 2, 9, 5};
    cout << "Maximum: " << findMax(arr, 5) << endl;
    return 0;
}

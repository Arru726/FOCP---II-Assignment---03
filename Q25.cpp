#include <iostream>
using namespace std;

int findMax(int arr[], int size) {
    int max = arr[0];
    for(int i = 1; i < size; i++)
        if(arr[i] > max)
            max = arr[i];
    return max;
}

int main() {
    int nums[] = {10, 25, 7, 32, 18};
    cout << "Max: " << findMax(nums, 5) << endl;
    return 0;
}

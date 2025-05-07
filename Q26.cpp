#include <iostream>
using namespace std;

int findSum(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}

int main() {
    int nums[] = {3, 6, 9, 12};
    cout << "Sum: " << findSum(nums, 4) << endl;
    return 0;
}

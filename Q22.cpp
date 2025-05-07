#include <iostream>
using namespace std;

double average(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++)
        sum += arr[i];
    return (double)sum / size;
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    cout << "Average: " << average(arr, 5) << endl;
    return 0;
}

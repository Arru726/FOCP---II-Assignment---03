#include <iostream>
using namespace std;

bool search(int arr[], int size, int key) {
    for(int i = 0; i < size; i++)
        if(arr[i] == key)
            return true;
    return false;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int key = 30;
    if(search(arr, 5, key))
        cout << "Found";
    else
        cout << "Not Found";
    return 0;
}

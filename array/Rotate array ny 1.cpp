#include<iostream>
using namespace std;

int main() {
    int arr[6] = {2, 7, 4, 11, 5, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp = arr[n - 1];

    // Shift elements to the right
    for(int i = n - 2; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }

    // Place the last element at the beginning
    arr[0] = temp;

    // Print the rotated array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

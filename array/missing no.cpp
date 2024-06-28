#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int n) {
    // Calculate the expected sum of numbers from 1 to n
    int totalSum = (n * (n + 1)) / 2;

    // Calculate the actual sum of the array elements
    int actualSum = 0;
    for (int i = 0; i < n - 1; i++) {
        actualSum += arr[i];
    }

    // The missing number is the difference between the expected sum and the actual sum
    return totalSum - actualSum;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6};  // Example array
    int n = sizeof(arr) / sizeof(arr[0]) + 1;  // Calculate n (size of the array should be n-1)
    
    int missingNumber = findMissingNumber(arr, n);
    cout << "The missing number is: " << missingNumber << endl;

    return 0;
}

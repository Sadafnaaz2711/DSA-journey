#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the position of the Fibonacci number you want to find: ";
    cin >> n;

    int arr[n];
    arr[0]=0;
    arr[1]=1;
    
    // Calculate the Fibonacci numbers up to the nth position
    for (int i = 2; i < n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    // Output the nth Fibonacci number
    cout << "The Fibonacci number at position " << n << " is: " << arr[n - 1] << endl;

    return 0;
}

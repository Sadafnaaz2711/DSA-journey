#include<iostream>

using namespace std;

int peakindex(int arr[], int size) {
    int s = 0;
    int e = size - 1;

    while (s < e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] < arr[mid + 1]) {
            s = mid + 1;
        } else {
            e = mid;
        }
    }
    return s;
}

int main() {
    int arr[] = {1, 3, 5, 7, 6, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int peakIndex = peakindex(arr, size);
    cout << "The peak element is at index: " << peakIndex << endl;
    cout << "The peak element is: " << arr[peakIndex] << endl;

    return 0;
}

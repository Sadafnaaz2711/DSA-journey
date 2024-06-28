#include <iostream>

using namespace std;

bool isPossible(int arr[], int n, int m, int mid) {
    int painterCount = 1;
    int workloadSum = 0;

    for (int i = 0; i < n; i++) {
        if (workloadSum + arr[i] <= mid) {
            workloadSum += arr[i];
        } else {
            painterCount++;
            if (painterCount > m || arr[i] > mid) {
                return false;
            }
            workloadSum = arr[i];
        }
    }
    return true;
}

int painterPartition(int arr[], int n, int m) {
    if (m > n) return -1; // More painters than parts

    int s=0;
    int sum=0;

    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    int e=sum;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (isPossible(arr, n, m, mid)) {
            ans = mid;
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return ans;
}

int main() {
    int arr[] = {5, 5, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = 2; // Number of painters

    cout << "The minimum workload of the painter with the maximum workload is: " << painterPartition(arr, n, m) << endl;

    return 0;
}

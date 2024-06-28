#include <iostream>
#include <climits>  // Include <climits> for INT_MIN

using namespace std;

void secondLarge(int arr[],int n)
{
    int ans = INT_MIN;  // Initialize ans to the smallest possible integer

    for (int i = 0; i < n; i++) {
        if (arr[i] > ans) {
            ans = arr[i];
        }
    }
    
    int second=INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] !=ans) {
            second = max(second,arr[i]);
        }
    }
    cout << "The second maximum value in the array is: " << second << endl;

} 
int main() {
    int arr[5] = {5, 7, 6, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    secondLarge(arr,n);
   
    return 0;
}

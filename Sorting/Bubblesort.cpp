#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int> &arr, int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        // Last i elements are already in place
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                // Swap arr[j] and arr[j + 1]
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    vector<int> arr = {64, 25, 12, 22, 11};
    int n = arr.size();
    
    bubbleSort(arr, n);

    cout << "Sorted array: \n";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

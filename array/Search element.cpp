#include <iostream>

using namespace std;

int main() {
    int arr[5] = {5, 4, 3, 2, 1};
    int x;
    cin >> x;
    
    int index = -1;
    for (int i = 0; i < 5; i++) {
        if (arr[i] == x) {
            index = i;
            break;  // Exit the loop once the element is found
        }
    }
    
    cout << index << endl;  // Print the index where the element is found, or -1 if not found
    
    return 0;
}

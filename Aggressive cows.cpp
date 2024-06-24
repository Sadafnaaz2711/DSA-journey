#include <iostream>
#include <vector>
#include <algorithm> // for max

using namespace std;

bool isPossible(vector<int>& stalls, int k, int mid) {
    int cowCount = 1;
    int lastPos = stalls[0];

    for (size_t i = 1; i < stalls.size(); i++) {
        if (stalls[i] - lastPos >= mid) {
            cowCount++;
            lastPos = stalls[i];
            if (cowCount >= k) {
                return true;
            }
        }
    }
    return false;
}

int aggressiveCows(vector<int>& stalls, int k) {
    sort(stalls.begin(), stalls.end());

    int s = 0;
    int e = stalls[stalls.size() - 1] - stalls[0];
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (isPossible(stalls, k, mid)) {
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }

    return ans;
}

int main() {
    vector<int> stalls = {4, 2, 1, 3, 6};
    int k = 2; // Number of cows

    cout << "The maximum minimum distance between cows is: " << aggressiveCows(stalls, k) << endl;

    return 0;
}

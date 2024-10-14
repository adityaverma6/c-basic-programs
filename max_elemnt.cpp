#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[6] = {7, 1, 5, 8, 6, 9};
    int ans = INT_MIN;

    for (int i = 0; i < 6; i++) { 
        if (arr[i] > ans) { 
            ans = arr[i];
        }
    }

    cout << "Maximum element: " << ans << endl; 
    return 0;
}

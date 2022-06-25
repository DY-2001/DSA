// { Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}
// } Driver Code Ends


pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    pair<int, int> p;
    int index = -1;
    int same = -1;
    sort(arr, arr + n);
    for(int i = 0; i < n; i++) {
        if(arr[i] > x) {
            index = i;
            break;
        }
        if(arr[i] == x) {
            index = i;
            same = 0;
            break;
        }
    }
    
    if(index == 0 && same == -1) {
        p.first = -1;
        p.second = arr[0];
    }
    else if(index == -1 && same == -1) {
        p.first = arr[n - 1];
        p.second = -1;
    }
    else if(same == 0) {
        p.first = arr[index];
        p.second = arr[index];
    }
    else {
        p.first = arr[index - 1];
        p.second = arr[index];
    }
    return p;
    
}

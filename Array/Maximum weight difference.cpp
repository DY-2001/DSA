// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    long long solve(int arr[], int n, int k) {
        sort(arr, arr + n);
        long long diff_1 = 0;
        long long diff_2 = 0;
        long long ask = 0;
        long long remain = 0;
        for(int i = 0; i < n; i++) {
            if(i < k) {
                ask += (long long)arr[i];
            }
            else {
                remain += (long long)arr[i];
            }
        }
        diff_1 = abs(ask - remain);
        
        reverse(arr, arr + n);
        ask = 0;
        remain = 0;
        for(int i =  0; i < n; i++) {
            if(i < k) {
                ask += (long long)arr[i];
            }
            else {
                remain += (long long)arr[i];
            }
        }
        diff_2 = abs(ask - remain);
        
        if(diff_2 > diff_1) {
            return diff_2;
        }
        return diff_1;
    }
};


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        auto ans = obj.solve(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends

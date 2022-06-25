// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
  public:
    int findDiff(int arr[], int n) {
        map<int, int> mp;
        for(int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }
        
        int max_re = INT_MIN, min_re = INT_MAX;
        for(auto i: mp) {
            if(max_re < i.second) 
                max_re = i.second;
            if(min_re > i.second)
                min_re = i.second;
        }
        return max_re - min_re;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n], i;
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.findDiff(arr, n) << "\n";
    }
    return 0;
}
  // } Driver Code Ends

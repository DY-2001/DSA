// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        auto itf = find(arr.begin(), arr.end(), x);
        int first = itf - arr.begin();
        
        reverse(arr.begin(), arr.end());
        
        auto it = find(arr.begin(), arr.end(), x);
        int last = arr.end() - it - 1;
        
        vector<int> v;
        v.push_back(first);
        v.push_back(last);
        vector<int> late;
        if(count(arr.begin(), arr.end(), x) == 0) {
            
            late.push_back(-1);
            return late;
        }
        
        return v;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}
  // } Driver Code Ends

// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    vector<int> repeatingEven(int arr[], int n) {
        map<int, int> mp;
        vector<int> v;
        for(int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }
        
        for(auto i: mp) {
            if(i.second % 2 == 0) {
                v.push_back(i.first);
            }
        }
        if(!v.empty())
            return v;
        v.push_back(-1);    
        return v;    
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.repeatingEven(arr, n);
        for (auto ele : ans) {
            cout << ele << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends

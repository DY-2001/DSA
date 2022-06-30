// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    string findMissing(int arr[], int n) {
        sort(arr, arr + n);
        string s;
        vector<pair<int, int>> v;
        
        for(int i = 0; i < n; i++) {
            if(arr[i] != 0 && i == 0) 
                v.push_back({0, arr[0] - 1});
            if(i != 0)
                if(arr[i - 1] + 1 <= arr[i] - 1)
                    v.push_back({arr[i - 1] + 1, arr[i] - 1});
        }
        
        for(int i = 0; i < v.size(); i++) {
            if(v[i].first == v[i].second)
                s += to_string(v[i].first);
            if(v[i].first < v[i].second) {
                s += to_string(v[i].first);
                s += "-";
                s += to_string(v[i].second);
            }
            s += " ";
        }
        if(s.size() == 0)
            s += to_string(-1);
        return s;
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
        auto ans = ob.findMissing(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

  // } Driver Code Ends

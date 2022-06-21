// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        vector<int> v_x;
        vector<int> v_y;
        vector<int> final;
        
        
        for(int i = 0; i < n; i++) {
            if(a[i] == x) {
                v_x.push_back(i);
            }
            if(a[i] == y) {
                v_y.push_back(i);
            }
        }
        
        sort(v_x.begin(), v_x.end());
        sort(v_y.begin(), v_y.end());
        
        for(int i = 0; i < v_x.size(); i++) {
            for(int j = 0; j < v_y.size(); j++) {
                final.push_back(abs(v_x[i] - v_y[j])); 
            }
        }
        
        sort(final.begin(), final.end());
        
        if(v_x.size() == 0 || v_y.size() == 0) {
            return -1;
        }
        else {
            return final[0]; 
        }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}
  // } Driver Code Ends

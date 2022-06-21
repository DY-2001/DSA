// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> getMoreAndLess(int arr[], int n, int x) {
	    int less = 0;
	    int large = 0;
	    vector<int> v;
	    
	    for(int i = 0; i < n; i++) {
	        if(arr[i] <= x) {
	            less++;
	        }
	        if(arr[i] >= x) {
	            large++;
	        }
	    }
	    v.push_back(less);
	    v.push_back(large);
	    
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
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMoreAndLess(arr, n, x);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
  // } Driver Code Ends

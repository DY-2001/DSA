// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;



 // } Driver Code Ends

class Solution{
  public:
    void rearrangeArray(int arr[], int n) {
        sort(arr, arr + n);
	    vector<int> v;
	    int even = 0, odd = n - 1;
	    for(int i = 0; i < n; i++) {
	        if(i % 2 != 0) {
	            v.push_back(arr[odd--]);
	        }
	        else {
	            v.push_back(arr[even++]);
	        }
	    }
	    
	    for(int i = 0; i < n; i++) {
	        arr[i] = v[i];
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
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        obj.rearrangeArray(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends

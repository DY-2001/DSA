// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Returns maximum repeating element in arr[0..n-1].
	// The array elements are in range from 0 to k-1
	int maxRepeating(int *arr, int n, int k) {
	    sort(arr, arr + n);
	    vector<pair<int, int>> v;
	    int count_num = 1;
	    
	    
	    for(int i = 0; i < n; i++) {
	        if(arr[i] == arr[i + 1]) {
	            count_num++;
	            continue;
	        }
	        v.push_back({arr[i], count_num});
	        count_num = 1;
	    }
	    
	    int max_value = 0, max_index = 0;
	    for(int i = 0; i < v.size(); i++) {
	        if(v[i].second > max_value) {
	            max_value = v[i].second;
	            max_index = v[i].first;
	        }
	    }
	    return max_index;
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
        Solution ob;
        auto ans = ob.maxRepeating(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends

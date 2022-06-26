// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
  public:
    vector<int> kSmallestElements(int arr[], int n, int k){
        vector<int> v;
        vector<int> result;
        unordered_map<int, int> mp;
        
        for(int i = 0; i < n; i++) {
            v.push_back(arr[i]);
        }
        
        sort(v.begin(), v.end());
        
        for(int i = 0; i < k; i++) {
            mp[v[i]]++;
        }
        
        for(int i = 0; i < n; i++) {
            if(mp[arr[i]] > 0) {
                mp[arr[i]]--;
                result.push_back(arr[i]);
            }
        }
        return result;
    }

};

// { Driver Code Starts.
int main() {
	
	int t; cin>>t;
	while(t--)
	{
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin >> arr[i];
	       
	    vector<int> ans;
	    Solution obj;
	    ans = obj.kSmallestElements(arr, n, k);
	    for(int i: ans)
	        cout << i << " ";
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends

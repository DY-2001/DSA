// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int firstElementKTime(int a[], int n, int k)
    {
        map<int, int> mp;
        set<int> s;
        int old_size = 0;
        int new_size = 0;
        
        for(int i = 0; i < n; i++) {
            old_size = s.size();
            s.insert(a[i]);
            new_size = s.size();
            if(old_size == new_size) 
                mp[a[i]]++;
            else 
                mp.insert({a[i], 1});
            if(mp[a[i]] == k) {
                return a[i];
            }    
        }
        return -1;
    }
};

// { Driver Code Starts.

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution ob;
	    cout<<ob.firstElementKTime(a, n, k)<<endl;
	}
	
	return 0;
}  // } Driver Code Ends

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	bool distinctAdjacentElement(int arr[], int n) 
	{ 
	    map<int, int> mp;
	    sort(arr, arr + n);
	    int total = 0;
	    for(int i = 0; i < n; i++)
	        mp[arr[i]]++;
        
        for(auto i: mp) 
            if((i.second > (n / 2) && n % 2 == 0) || (i.second > ((n / 2) + 1) && n % 2 != 0))
                return 0;
        return 1;        
	} 
};

// { Driver Code Starts.
int main() 
{
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin >> n;
	    int arr[n];
	    for(int i = 0;i<n;i++)
	        cin >> arr[i];
        Solution ob;
        if(ob.distinctAdjacentElement(arr,n))
            cout<<"YES";
        else
            cout<<"NO";
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends

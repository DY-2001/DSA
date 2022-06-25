// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{


	public:
	vector<int> alternateSort(int arr[], int N)
	{
	    sort(arr, arr + N);
	    vector<int> v;
	    int even = 0, odd = N - 1;
	    for(int i = 0; i < N; i++) {
	        if(i % 2 == 0) {
	            v.push_back(arr[odd--]);
	        }
	        else {
	            v.push_back(arr[even++]);
	        }
	    }
	    return v;
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
       	
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
       

        Solution ob;
        vector<int> ans = ob.alternateSort(a, n);
        for(auto i:ans)
        	cout << i << " ";
	    cout << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends

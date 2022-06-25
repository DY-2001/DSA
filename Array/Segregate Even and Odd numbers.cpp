// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	
	
	public:
	bool check_elements(int arr[], int n, int A, int B)
	{
	    vector<int> v;
	    sort(arr, arr + n);
	    int range = B - A + 1;
	    
	    for(int i = A; i <= B; i++) {
	        v.push_back(i);
	    }
	    
		for(int i = 0; i < v.size(); i++) {
		    if(!binary_search(arr, arr + n, v[i])) {
		        return false;
		    }
		}
		return true;
	}
};
	

// { Driver Code Starts.


int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,A,B;
		cin>>n>>A>>B;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];

        

        Solution ob;
        if (ob.check_elements(a, n, A, B))
			cout << "Yes";
		else
			cout << "No";
	    
        
	    cout << "\n";
	     
    }
    return 0;
}






  // } Driver Code Ends

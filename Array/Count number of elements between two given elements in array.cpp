// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    int getCount(int arr[], int n, int num1, int num2)
    {
        int count = 0;
        auto it = find(arr, arr + n, num1);
        int low = it - arr;
        
        reverse(arr, arr + n);
        
        auto its = find(arr, arr + n, num2);
        int high = n - (its - arr) - 1;
        
        reverse(arr, arr + n);
        for(int i = 0; i < n; i++) {
            if(i > low && i < high) {
                count++;
            }
        }
        return count;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    int num1,num2;
	    cin>>num1>>num2;
	    Solution ob;
	    cout << ob.getCount(a, n, num1, num2) <<"\n";
	}
	return 0;
}
  // } Driver Code Ends

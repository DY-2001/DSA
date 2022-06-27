// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
  public:
    bool possible(long long arr[], long long n)
    {
        long long sum = 0;
        sum = accumulate(arr, arr + n, sum);
        if(sum == ((n * (n + 1)) / 2)) 
            return true;
        return false;    
    }
};





// { Driver Code Starts.

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long arr[n];
        for(int i =0;i<n;i++)
            cin >> arr[i];
        Solution ob;
        if(ob.possible(arr, n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
	return 0;
}  // } Driver Code Ends

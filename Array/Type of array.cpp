// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
  
    public:
    pair<long long, int> maxNtype(long long arr[], long long n)
    {
        pair<long long, int> result;
        
        long long min_index = min_element(arr, arr + n) - arr;
        long long max_index = max_element(arr, arr + n) - arr;
        
        if(min_index == 0 && max_index == n - 1) {
            result.first = arr[n - 1];
            result.second = 1;
            return result;
        }
        if(min_index == n - 1 && max_index == 0) {
            result.first = arr[0];
            result.second = 2;
            return result;
        }
        if(min_index > max_index) {
            result.first = *max_element(arr, arr + n);
            result.second = 4;
            return result;
        }
        if(min_index < max_index) {
            result.first = *max_element(arr, arr + n);
            result.second = 3;
            return result;
        }
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
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        pair<long long, int> pair = ob.maxNtype(arr, n);
        cout<<pair.first<<" "<<pair.second<<"\n";
    }
	return 0;
}  // } Driver Code Ends

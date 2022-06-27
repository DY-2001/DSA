// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    long long int findMaxOddSubarraySum(long long int arr[], long long int n)
    {
        sort(arr, arr + n);
        reverse(arr, arr + n);
        long long int toggle = 0;
        long long int sum =  0;
        long long int min_odd = INT_MAX;
        
        for(int i = 0; i < n; i++) {
            if(arr[i] > 0) 
                sum += arr[i];
            if(arr[i] % 2 != 0) {
                toggle = 1;
                if(abs(arr[i]) < abs(min_odd))
                    min_odd = arr[i];
            }
        }
        if(toggle == 1) 
            if(sum % 2 != 0) 
                return sum;
            else
                if(min_odd < 0)
                    return sum + min_odd;
                else 
                    return sum - min_odd;
        else 
            return -1;
    }
};

// { Driver Code Starts.


int main()
{   
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;    
        cout <<ob.findMaxOddSubarraySum(arr, n);
        cout<<endl;
    }

    
    return 0;
}  // } Driver Code Ends

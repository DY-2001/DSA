// { Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    int findClosest(int arr[], int n, int target) 
    { 
        int left_diff = -1;
        int right_diff = -1;
        sort(arr, arr + n);
        int i = 0;
        for(i = 0; i < n; i++) {
            if(arr[i] >= target) {
                if(i == 0) {
                    return arr[i];
                }
                else {
                    left_diff = abs(target - arr[i - 1]);
                    right_diff = abs(target - arr[i]);
                    break;
                }
            }
        }
        if(left_diff >= right_diff && left_diff != -1 && right_diff != -1) {
            return arr[i];
        }
        else if(left_diff < right_diff && left_diff != -1 && right_diff != -1) {
            return arr[i - 1];
        }
        return arr[n - 1];
    } 
};

// { Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,target;
        cin>>n>>target;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(arr,n,target)<<endl;
    }
}
  // } Driver Code Ends

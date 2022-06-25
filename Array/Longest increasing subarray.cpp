// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
  public:
    long int lenOfLongIncSubArr(long int arr[], long int n) {
        long int lon_len = 1;
        long int len = 1;
        
        for(long int i = 1; i < n; i++) {
            if(arr[i - 1] < arr[i]) 
                len++;
            if(lon_len < len)
                lon_len = len;
            if(arr[i - 1] > arr[i]) 
                len = 1;
        }
        return lon_len;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long int n;
        cin >> n;
        long int arr[n], i;
        for (i = 0; i < n; i++) 
            cin >> arr[i];
        Solution obj;
        cout << obj.lenOfLongIncSubArr(arr, n) << endl;
    }
    return 0;
}  // } Driver Code Ends

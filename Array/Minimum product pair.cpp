// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

class Solution{
  public:
    long long int printMinimumProduct(int arr[], int n) {
        sort(arr, arr + n);
        long long int pro = 1;
        pro = pro * (long long int)arr[0];
        pro = pro * (long long int)arr[1];
        return pro;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int i, a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        cout << obj.printMinimumProduct(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends

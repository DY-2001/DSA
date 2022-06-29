// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {

  public:
    int FindElement(int arr[], int N) {
        int value = -1;
        int pre_max_value = -1;
        
        for(int i = 0; i < N; i++) {
            if(arr[i] > pre_max_value) { 
                pre_max_value = arr[i];
                if(value == -1)
                    value = pre_max_value;
                continue;    
            }
            if(arr[i] < pre_max_value && arr[i] < value) {
                value = -1;
                continue;
            }
            if(arr[i] == value)
                value = -1;
        }
        return value;
    }
};


// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i) cin >> a[i];

        Solution ob;
        cout << ob.FindElement(a, n);
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends

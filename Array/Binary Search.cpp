// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        int l = 0;
        int r = n;
        return binary_search(arr, l, r, k); 
    }
    
    int binary_search(int arr[], int l, int r, int k) {
        if(l <= r) {
            int mid = (l + r) / 2;
        
            if(arr[mid] == k) {
                return mid;
            }
            else if(arr[mid] > k) {
                return binary_search(arr, l, mid - 1, k);
            }
            else if(arr[mid] < k) {
                return binary_search(arr, mid + 1, r, k);
            }
        }
        
        return -1;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}
  // } Driver Code Ends

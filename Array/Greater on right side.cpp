// { Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* Function to replace every element with the
	next greatest element */
	void nextGreatest(int arr[], int n) {
	    auto it = max_element(arr, arr + n);
	    int validity = it - arr;
	    
	    for(int i = 0; i < n - 1; i++) {
	        if(i < validity) {
	            arr[i] = *it;
	        }    
	        if(i == validity) {
	            it = max_element(arr + validity + 1, arr + n);
	            arr[i] = *it;
	            validity = it - arr;
	        }
	    }
	    arr[n - 1] = -1;
	}


};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.nextGreatest(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends

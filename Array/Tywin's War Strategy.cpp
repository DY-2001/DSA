// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


int min_soldiers(int arr[], int n, int k);


int main() {
    
    int t;cin>>t;
    while(t--)
    {
        int n, k;
        cin>> n >> k;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
            
        cout << min_soldiers(arr, n, k) << endl;
        
    }
	
	return 0;
}// } Driver Code Ends


int min_soldiers(int arr[], int n, int k){
    vector<int> v;
    for(int i = 0; i < n; i++) {
        if(arr[i] % k != 0)
            v.push_back(k - (arr[i] % k));
    }
    
    int total = 0;
    sort(v.begin(), v.end());
    if(v.size() <= n / 2)
        return 0;
    for(int i = 0; i < v.size() - (n / 2); i++) {
        total += v[i];
    }    
    return total;
}

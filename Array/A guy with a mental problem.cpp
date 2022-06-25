// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    long long minTime(long long a[], long long b[], long long n)
    {
        long long int total_a = 0, total_b = 0;
        
        for(int i = 0; i < n; i++) {
            if(i % 2 == 0) 
                total_a += a[i];
            else 
                total_a += b[i];
        }
        
        for(int i = 0; i < n; i++) {
            if(i % 2 == 0) 
                total_b += b[i];
            else 
                total_b += a[i];
        }
        return min(total_a, total_b);
    }
};

// { Driver Code Starts.
int main() {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long a[n], b[n];
        for(long long i=0;i<n;i++)
            cin >> a[i];
        for(long long i=0;i<n;i++)
            cin >> b[i];
        Solution ob;
        cout << ob.minTime(a, b, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends

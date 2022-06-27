// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
    public:
        long long SoldierRequired(long long a[], long long n)
    {
         long long maxim = *max_element(a, a + n);
         long long minim = *min_element(a, a + n);
         
         long long num_max = count(a, a + n, maxim);
         long long num_min = count(a, a + n, minim);

         if(n == 1) 
             return 0;
         return n - (num_max) - (num_min);
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.SoldierRequired(a, n)<<endl;
    }
	return 0;
}  // } Driver Code Ends

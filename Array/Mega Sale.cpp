// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

long long maxProfit(int a[], int n, int m);

int main()
 {
     ll t;
     cin>>t;
     while(t--)
     {
         int n,m;
         cin>>n>>m;
         int a[n+5];
         for(int i=0;i<n;i++)
         cin>>a[i];
         
         cout<< maxProfit(a, n, m) <<endl;
     }
	
	return 0;
}

// } Driver Code Ends


long long maxProfit(int a[], int n, int m)
{
    sort(a, a + n);
       int count = 0;
       long long sum = 0;
       for(int i = 0; i < n; i++) {
           if(a[i] < 0) {
                sum += (long long)a[i];
                count++;
                if(count == m)
                    break;
           }
       }
       return abs(sum);
}

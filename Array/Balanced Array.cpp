// { Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    int minValueToBalance(int a[], int n)
    {
        int first_half_sum = 0;
        int second_half_sum = 0;
        
       for(int i = 0; i < n; i++) {
           if(i < n / 2) {
               first_half_sum += a[i];
           }
           else {
               second_half_sum += a[i];
           }
       }
       
       return abs(first_half_sum -second_half_sum);
    }
};



// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;	
		cout<<ob.minValueToBalance(a,n)<<endl;
	}
	return 0;
}  // } Driver Code Ends

// { Driver Code Starts
#include <iostream>
using namespace std;
#define ll long long

ll findMaxProduct(int A[], int n, int k);

int main() {
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int k;
		cin>>k;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
	
		cout<<findMaxProduct(a,n,k)<<endl;
	}
	// your code goes here
	return 0;
}// } Driver Code Ends

#include<bits/stdc++.h>
/*You are required to complete the function*/

long long findMaxProduct(int A[], int n, int k)
{
    long long max = 0;
    long long max_pro = 1;
    
    for(int i = 0; i < k; i++) {
        max_pro = max_pro * (long long)(A[i]);
    }
    max = max_pro;
    for(int i = 0; i <= n - k - 1; i++) {
        max_pro = max_pro / A[i];
        max_pro = max_pro * A[k + i];
        if(max_pro > max) {
            max = max_pro;
        }
    }
    return max;
}


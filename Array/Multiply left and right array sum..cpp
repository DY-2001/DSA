// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int multiply(int arr[], int n);


int main() {
	//code
	int t;
	cin>>t;
	while (t--)
	{
	    int n,sum1=0,sum2=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    
	    cout << multiply(a, n) << endl;
	    
	}
	return 0;
}// } Driver Code Ends


//User function Template for C++

int multiply(int arr[], int n)
{
    int left_sum = 0;
    int right_sum = 0;
    
    for(int i = 0; i < n; i++) {
        if(i < n / 2)
            left_sum += arr[i];
        else 
            right_sum += arr[i];
    }
    
    return left_sum * right_sum;
}

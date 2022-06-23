// { Driver Code Starts
#include<iostream>
using namespace std;
int num(int a[], int n, int k);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		int k;
		cin>>k;
		cout<<num(a,n,k)<<endl;
	}
}// } Driver Code Ends

#include<bits/stdc++.h>
/*Complete the function given below*/

int count_digit(int p, int k) {
    int repeat = 0;
    int temp;
    while(p > 0) {
        temp = p % 10;
        if(temp == k) {
            repeat++;
        }
        p = p / 10;
    }
    return repeat;
}
int num(int a[], int n, int k)
{
     int count = 0;
     for(int i = 0; i < n; i++) {
         count += count_digit(a[i], k);
     }
     return count;
}


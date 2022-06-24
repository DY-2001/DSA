// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long int maxSum(int arr[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;++i)
			cin>>arr[i];
		cout<<maxSum(arr,n)<<endl;
	}
	return 0;
}// } Driver Code Ends


long long int maxSum(int arr[], int n)
{
    vector<int> v;
    sort(arr, arr + n);
    
    int first = 0;
    int last = n - 1;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            v.push_back(arr[first]);
            first++;
        }
        else {
            v.push_back(arr[last]);
            last--;
        }
    }
    
    long long int sum = 0;
    for(int i = 0; i < n - 1; i++) {
        sum += (long long int)abs(v[i] - v[i + 1]);
    }
    sum = sum + (long long int)abs(v[0] - v[n - 1]);
    return sum;
}

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> findTriplet(int arr[], int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];
        vector<int> res = findTriplet(arr, n);
        if(res.size()!=3)cout<<"-1\n";
	    else
	    {
	        sort(res.begin(), res.end());
	        if(res[0]+res[1]==res[2])
	            cout<<"1\n";
	        else
	             cout<<"0\n";
	    }
    }
	return 0;
}
// } Driver Code Ends


// function should return the triplet
// in a vector container defined as "vector<int> result"
// use result.push_back() to insert elements in the 
// container
// if no such triplet is found, 
// return the container result as empty
// Note: container should be contain 3 elements or 0 elements only.
vector<int> findTriplet(int arr[], int n)
{
    sort(arr, arr + n);
    vector<int> result;
    int front = 0;
    int mid = 1;
    int last = 2;
    
    while(front <= n - 3) {
        int a = arr[front];
        int b = arr[mid];
        int c = arr[last];
        
        if(a + b == c) {
            result.push_back(a);
            result.push_back(b);
            result.push_back(c);
            return result;
        }
        if(last != n - 1) {
            last++;
        }
        if(mid != n - 2 && last == n - 1) {
            mid++;
            last = mid + 1;
        }
        if(mid == n - 2 && last == n - 1) {
            front++;
            mid = front + 1;
            last = front + 1;
        }
    }
    
    return result;
}

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	

	public:
	int checkFib(long long arr[], int N)
	{
	    long long count = 0;
	    for(long long i = 0; i < N; i++) {
	        if(fibonacci(arr[i])) {
	            count++;
	        }
	    }
	    return count;
	}
	
	int fibonacci(long long num) {
	    int i = 0;
	    int pre = 0;
	    int pre_pre = 0;
	    while(i <= num) {
	        if(i == num) 
	            return 1;
	        if(i == 0) {
	            i = 1;
	            continue;
	        }
	        pre_pre = pre;
	        pre = i;
	        i = pre_pre + pre;
	    }
	    return 0;
	}

};
	

// { Driver Code Starts.



int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
       	
		cin>>n;
		long long a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
        

        Solution ob;
        cout << ob.checkFib(a, n);
	    cout << "\n";
	     
    }
    return 0;
}

	  // } Driver Code Ends

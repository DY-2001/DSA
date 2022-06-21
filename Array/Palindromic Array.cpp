// { Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


 // } Driver Code Ends
/*Complete the function below*/
#include<bits/stdc++.h>
class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	for(int i = 0; i < n; i++) {
    	    if(checkPalin(a[i]) == -1) {
    	        return 0;
    	    }
    	}
    	return 1;
    }
    int checkPalin(int num) {
        string s = to_string(num);
        
        for(int i = 0; i < s.size(); i++) {
            if(s[i] != s[s.size() - 1 - i]) {
                return -1;
            }
        }
        return 1;
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
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}  // } Driver Code Ends

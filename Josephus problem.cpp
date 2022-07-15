// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
/*You are required to complete this method */

class Solution
{
    public:
    int josephus(int n, int k)
    {
       int start = 0;
       vector<int> v(n);
       for(int i = 0; i < n; i++)
           v[i] = i + 1;             
       return right_position(v, start, k);
    }
    
    int right_position(vector<int> &v, int start, int k) {
        if(v.size() == 1) 
            return v[0];
            
        int starting = (start + k) % v.size() - 1;
        if(starting < 0)    
            starting = v.size() + starting;
        v.erase(v.begin() + starting);
        right_position(v, starting, k);
    }
};



// { Driver Code Starts.

int main() {
	
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k
		
		//calling josephus() function
		Solution ob;
		cout<<ob.josephus(n,k)<<endl;
	}
	return 0;
}  // } Driver Code Ends

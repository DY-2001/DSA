// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    void gfSeries(int N)
    {
        long long first = 0;
        long long second = 1;

        print_series(N, first, second);
        
        
    }
    
    void print_series(int N, long long first, long long second) {
        if(N == 0) {
            cout << endl;
            return;
        }
        
        long long ans = ((first) * (first)) - second;
        cout << first << " ";
        print_series(N - 1, second, ans);
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        ob.gfSeries(N);
    }
    return 0;
}  // } Driver Code Ends

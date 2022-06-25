// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
    // Write your code here

class Solution{
    public:
    int mergeNsort(int a[], int b[], int n, int m, int answer[])
    {
        set<int> sa;
        set<int> sb;
        int maxi = max(n, m);
        for(int i = 0; i < maxi; i++) {
            if(maxi == n) {
                if(i < m) {
                    sa.insert(a[i]);
                    sb.insert(b[i]);
                } 
                else {
                    sa.insert(a[i]);
                }
                
            } 
            else {
                if(i < n) {
                    sa.insert(a[i]);
                    sb.insert(b[i]);
                } 
                else {
                    sb.insert(b[i]);
                }
            }
        }
        
        
        set<int> result;
        int len = sa.size() + sb.size();
        
        for(auto i: sa) {
            result.insert(i);
        }
        for(auto i: sb) {
            result.insert(i);
        }
        int last = result.size();
        int p = 0;
        for(auto i: result) {
            answer[p++] = i;
        }
        sort(answer, answer + last);
        return last;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cin>>m;
        int b[m+5];
        for(int j=0;j<m;j++)
            cin>>b[j];
        Solution ob;
        int answer[n+m+5];
        int x=ob.mergeNsort(a, b, n, m, answer);
        
        for(int i=0;i<x;i++)
        cout<<answer[i]<<" ";
        cout<<endl;
    }
	
	return 0;
}  // } Driver Code Ends

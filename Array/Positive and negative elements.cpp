// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
  public:
    vector<int> arranged(int a[],int n)
    {
        vector<int> p;
        vector<int> ne;
        vector<int> result;
        for(int i = 0; i < n; i++) {
            if(a[i] >= 0) 
                p.push_back(a[i]);
            else 
                ne.push_back(a[i]);
        }
        int j = 0;
        int k = 0;
        for(int i = 0; i < n; i++) {
            if(i % 2 == 0) 
                result.push_back(p[j++]);
            else 
                result.push_back(ne[k++]);
        }
        return result;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    vector<int> ans;
    Solution obj;
    ans=obj.arranged(a,n);
    for(i=0;i<n;i++)
        cout<<ans[i]<<" ";
    cout<<"\n";
    }
}
  // } Driver Code Ends

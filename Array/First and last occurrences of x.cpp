// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    vector<int> v;
    int first = -1;
    int second = -1;
    
    for(int i = 0; i < n; i++) {
        if(arr[i] == x && first == -1) {
            first = i;
            continue;
        }
        if(arr[i] == x && first != -1) {
            second = i;
        } 
    }
    
    if(second == -1) {
       v.push_back(first); 
       v.push_back(first);
    }
    else {
       v.push_back(first); 
       v.push_back(second);
    }
    
    
    return v;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends

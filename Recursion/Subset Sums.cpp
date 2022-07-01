// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
    
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> v;
        int s = 0;
        sum_subset(arr, s, N, v);
        
        return v;
    }
    
    void sum_subset(vector<int> arr, int s, int N, vector<int> &v) {
        if(arr.empty()) {
            v.push_back(s);
            return;
        }   
        int s1 = s + arr[0];
        int s2 = s;
        arr.erase(arr.begin());
        sum_subset(arr, s1, N, v);
        sum_subset(arr, s2, N, v);
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
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends

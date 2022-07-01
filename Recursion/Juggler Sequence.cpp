// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> jugglerSequence(int N){
        
        vector<int> v;
        v.push_back(N);
        make_sequence(N, v);
        return v;
    }
    
    void make_sequence(int N, vector<int> &v) {
        if(N == 1) {
            return;
        }
        
        int p = pow((v[v.size() - 1]), 0.5);
        int q = pow((v[v.size() - 1]), 1.5);
        
        if(N % 2 == 0) { 
            v.push_back(p);
            make_sequence(p, v);
        }
        else {
            v.push_back(q);
            make_sequence(q, v);
        }
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.jugglerSequence(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends

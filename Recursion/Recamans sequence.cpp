// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> recamanSequence(int n){
        int r = 1;
        int value = 0;
        vector<int> v;
        print_recamanSequence(v, r, n, value);
        return v;
    }
    
    void print_recamanSequence(vector<int> &v, int r, int n, int value) {
        if(r == n + 1) {
            return;
        }
        
        v.push_back(value);
        value = v[v.size() - 1];
        if(value - r > 0 && !find_ele(value - r, v))
            print_recamanSequence(v, r + 1, n, value - r);
        else 
            print_recamanSequence(v, r + 1, n, value + r);
    }
    
    bool find_ele(int value, vector<int> &v) {
        for(int i = 0; i < v.size(); i++) {
            if(v[i] == value) {
                return true;
            }
        }
        return false;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<int> ans = ob.recamanSequence(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends

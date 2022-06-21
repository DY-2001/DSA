// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    void scores(long long a[], long long b[], int &ca, int &cb)
    {
        int score_a = 0, score_b = 0;
        
        if(a[0] > b[0]) {
            score_a++;    
        }
        else if(a[0] < b[0]){
            score_b++;
        }
        
        if(a[1] > b[1]) {
            score_a++;    
        }
        else if(a[1] < b[1]){
            score_b++;
        }
        
        if(a[2] > b[2]) {
            score_a++;    
        }
        else if(a[2] < b[2]){
            score_b++;
        }
        
        ca = score_a;
        cb = score_b;
    }
};

// { Driver Code Starts.
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        long long int a[5], b[5], i=0;
        int ca=0, cb=0;
        for(i=0; i<3; i++)
            cin>>a[i];
    
        for(i=0; i<3; i++)
            cin>>b[i];
        Solution ob;
        ob.scores(a, b, ca, cb);
        
        cout<<ca<<" "<<cb<<endl;
    }
    return 0 ;
}  // } Driver Code Ends

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int lastIndex(string s) 
    {
        int back = s.size() - 1;
        
        while(back >= 0) {
            if(s[back] == '1') 
                return back;
            else 
                back--;
        }
        return -1;
    }

};

// { Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.lastIndex(s) << endl;
    }
    return 0;
}  // } Driver Code Ends

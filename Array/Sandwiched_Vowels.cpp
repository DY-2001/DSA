// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution{
    
    public:

    string Sandwiched_Vowel(string s){
        for(int i = 1; i < s.size() - 1; i++) {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] ==  'u') {
                if(s[i - 1] != 'a' && s[i - 1] != 'e' && s[i - 1] != 'i' && s[i - 1] != 'o' && s[i - 1] != 'u' && s[i + 1] != 'a' && s[i + 1] != 'e' && s[i + 1] != 'i' && s[i + 1] != 'o' && s[i + 1] != 'u') {
                    s.erase(s.begin() + i);                        
                }
            }
        }
        return s;
    }
};

// { Driver Code Starts.

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution obj;
        string ans = obj.Sandwiched_Vowel(s);
        cout<<ans<< endl;
    }

	return 0;
}  // } Driver Code Ends

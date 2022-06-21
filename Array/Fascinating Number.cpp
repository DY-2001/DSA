// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	bool fascinating(int n) {
	   int mul_2 = n * 2;
	   int mul_3 = n * 3;
	   
	   string s1 = to_string(n);
	   string s2 = to_string(mul_2);
	   string s3 = to_string(mul_3);
	   
	   s1 = s1 + s2 + s3;
	   
	   for(int i = 0; i < s1.size() - 1; i++) {
	       for(int j = i + 1; j < s1.size(); j++) {
	           if(s1[i] == s1[j] || s1[i] == '0' || s1[j] == '0') {
	               return 0;
	           }
	       }
	   }
	   return 1;
	    
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.fascinating(n);
        if (ans) {
            cout << "Fascinating\n";
        } else {
            cout << "Not Fascinating\n";
        }
    }
    return 0;
}  // } Driver Code Ends

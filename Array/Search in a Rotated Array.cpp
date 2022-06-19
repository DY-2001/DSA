#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int search(int A[], int l, int h, int key){
        auto it = find_if(A, A + h + 1, comp(key));
        if(it != A + h + 1) {
            return distance(A, it);
        }
        else {
            return -1;
        }
    }
    
    struct comp
    {
    	int elem;
    	comp(int const &i): elem(i) { }
    
    	bool operator()(int const &i) {
    		return (i == elem);
    	}
    };
    
};

// { Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}  // } Driver Code Ends

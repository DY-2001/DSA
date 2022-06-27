// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int minSum(int a[], int b[], int n) 
    {
        int mini = INT_MAX;
        int front = 0;
        int back = front + 1;
        
        
        int min_a = *min_element(a, a + n);
        int min_b = *min_element(b, b + n);
        
        int posi_a = min_element(a, a + n) - a;
        int posi_b = min_element(b, b + n) - b;
        
        if(posi_a != posi_b)
            return min_a + min_b;
        a[posi_a] = INT_MAX;
        int mini_a = *min_element(a, a + n);
        b[posi_b] = INT_MAX;
        int mini_b = *min_element(b, b + n);
        return min(min_a + mini_b, mini_a + min_b);
    } 
};

// { Driver Code Starts.

// Driver code 
int main() 
{ 
    int t;
    cin >> t;
    while(t--)
    {
        int n, i;
        cin >> n;
        int a[n], b[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (i = 0; i < n; i++) {
            cin >> b[i];
        }
        Solution ob;
        cout << ob.minSum(a, b, n) <<endl;

    }
	return 0; 
} 
  // } Driver Code Ends

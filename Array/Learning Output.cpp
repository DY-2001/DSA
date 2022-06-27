// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    void Learning(int a[], int n, float &pos, float &neg, float &zero )
    {
        int total_posi = 0;
        int total_nega = 0;
        int total_zero = count(a, a + n, 0);
        
        for(int i = 0; i < n; i++) {
            if(a[i] > 0) 
                total_posi++;
            else if(a[i] < 0)
                total_nega++;
        }
        
        pos = (float)n / total_posi;
        neg = (float)n / total_nega;
        zero = (float)n / total_zero;
        
    }
};

// { Driver Code Starts.
int main()
{
    long long int t = 0;
    scanf("%lld", &t);
    while(t--)
    {
        int i, n; 
        scanf("%d", &n);
        int a[n+5];
        for(i=0; i<n; i++)
            scanf("%d", &a[i]);
            
        float pos=0, neg=0, zero=0;
        Solution ob;
        ob.Learning(a, n, pos, neg, zero);
        
        printf("%g\n%g\n%g\n", pos, neg, zero);
    }
}
  // } Driver Code Ends

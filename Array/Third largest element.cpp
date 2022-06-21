// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
         sort(a, a + n);
         int first_lar = a[n - 1];
         int second_lar;
         int second_lar_index = -1;
         int third = -1;
         
         int i = n - 2;
         while(i >= 0) {
             if(first_lar != a[i] && second_lar_index == -1) {
                 second_lar = a[i];
                 second_lar_index = i;
                 i--;
                 continue;
             }
             if(second_lar_index != -1) {
                 if(a[i] != second_lar) {
                     third = a[i];
                     break;
                 }
             }
             i--;
         }
         return third;
    }

};

// { Driver Code Starts.
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}     // } Driver Code Ends

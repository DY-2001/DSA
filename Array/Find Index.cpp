// { Driver Code Starts
#include <iostream>
#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
  public:
    vector<int> findIndex(int a[], int n, int key)
    {
        vector<int> v;
        int left_index = -1;
        int right_index = -1;
        
        for(int i = 0; i < n; i++) {
            if(a[i] == key && left_index == -1) {
                v.push_back(i);
                left_index = 0;
                right_index = i;
            }
            if(left_index == 0 && a[i] == key) {
                right_index = i;
            }
        }
        v.push_back(right_index);
        if(right_index == -1) {
            v.push_back(-1);
        }
        return v;
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
        vector<int> res;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        res=ob.findIndex(arr, n, key);
        for (int i = 0; i < res.size(); i++) 
        cout << res[i] << " ";
        cout << "\n";
    }
    
    return 0;
}
  // } Driver Code Ends

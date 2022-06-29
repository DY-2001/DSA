// { Driver Code Starts
// CPP program to check whether the given array
// is perfect or not.
#include <iostream>
using namespace std;

 // } Driver Code Ends

#include<bits/stdc++.h>
class Solution{
    public:
    int check(int arr[], int n)
    {
        int i = 0;
        
        while(i < n - 1 && arr[i] < arr[i + 1])
            i++;
        while(i < n -1 && arr[i] == arr[i + 1])
            i++;
        while(i < n - 1 && arr[i] > arr[i + 1])
            i++;
            
        if(i == n - 1)  
            return 1;
        return 0;    
                
        
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
        int arr[n];
        for (int i=0; i<n; i++)
           cin>>arr[i];
        Solution ob;
        if (ob.check(arr, n))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}  // } Driver Code Ends

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    void sortIt(long long arr[], long long n)
    {
        sort(arr, arr + n);
        vector<long long> v;
        vector<long long> a;
        
        for(long long i = 0; i < n; i++) {
            if(arr[i] % 2 == 0) {
                v.push_back(arr[i]);
            }
            else {
                a.push_back(arr[i]);
            }
        } 
        long long len = a.size();
        for(int i = 0; i < len / 2; i++) {
            swap(a[i], a[len - i - 1]);
        }
        
        for(long long i = 0; i < n; i++) {
            if(i < a.size()) {
                arr[i] = a[i];
            }
            else {
                arr[i] = v[i - a.size()];
            }
        }
    }
};

// { Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long arr[n];

        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        
        Solution ob;
        ob.sortIt(arr, n);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends

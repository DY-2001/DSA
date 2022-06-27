// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string answer(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        
        cout<< answer(a, n) <<endl;
    }
    return 0;
}
// } Driver Code Ends


string answer(int a[], int n)
{
    int diff = abs(a[0] - a[1]); 
    if(a[n / 2] == 1 && n % 2 != 0) {
        for(int i = 0; i < n - 1; i++) {
            if(diff != 0 && diff == abs(a[i] - a[i + 1])) {
                continue;
            }
            return "No";
        }
    }
    else {
        return "No";
    }
    return "Yes";
}

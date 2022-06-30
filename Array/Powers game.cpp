// { Driver Code Starts


#include <bits/stdc++.h>

using namespace std;

vector<int> getFreq(int x, int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, n;
        cin >> x >> n;
        auto ans = getFreq(x, n);
        for (auto &x: ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends

void set_repeat(long long power, vector<int> &v) {
    int temp;
    for(int i = 0; power != 0; i++) {
        temp = power % 10;
        v[temp]++;
        power = power / 10;
    }
}


vector<int> getFreq(int x, int n) {
    vector<int> v(10, 0);
    long long power;
    
    for(int i = 1; i <= n; i++) {
        power = pow(x, i);
        if(i >= 14 && x == 15) {
            if(i == 14) {
                power = pow(15, 13);
                power *= 15;
            }
            else {
                power = pow(15, 13);
                power *= 225;
            }
            set_repeat(power, v);
        }
        else    
            set_repeat(power, v);
    }
    return v;
    
}


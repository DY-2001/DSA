#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int setBits(int N) {
        return __builtin_popcount(N);
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    long long count = 0;
    long long toh(int N, int from, int to, int aux) {
        if(N == 0) {
            return count;
        }
        
        toh(N - 1, from, aux, to);
        count++;
        cout << "move disk " << N << " from rod " << from << " to rod " << to << endl;
        toh(N - 1, aux, to, from);
    }

};

int main() {

    int T;
    cin >> T;
    while (T--) {
        
        int N;
        cin >> N;
        
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}

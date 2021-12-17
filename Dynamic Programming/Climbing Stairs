//LeetCode

class Solution {
public:
    int climbStairs(int n) {
        
        vector<int> vec(n + 1);

        for(int i = 0; i <= n; i++) {
            if(i == 0 || i == 1 || i == 2) {
                vec[i] = i;
            }
            else {
                vec[i] = vec[i - 1] + vec[i - 2];
            }
        } 
        return vec[n];
    }
};

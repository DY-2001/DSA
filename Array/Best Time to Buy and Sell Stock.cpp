//LeetCode
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int value = prices[0], diff = 0, max = 0;
        for(int i = 1; i < prices.size(); i++) {
            diff = prices[i] - value;
            if(diff > max) {
                max = diff;
            }
            if(diff < 0) {
                value = prices[i];
            }
        }
        return max;
    }
};

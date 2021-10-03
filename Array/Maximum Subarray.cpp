//LeetCode
//Kadane's Algorithm
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = -10001, local_max = 0;
        for(int i = 0; i < nums.size(); i++) {
            local_max = local_max + nums[i];
            if(max < local_max) {
                max = local_max;
            }
            if(local_max < 0) {
                local_max = 0;
            }
        }
        return max;
    }             
};

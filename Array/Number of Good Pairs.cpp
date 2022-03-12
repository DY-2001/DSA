//LeetCode

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        long long int count = 0;
        for(long long int i = 0; i < nums.size(); i++) {
            for(long long int j = i + 1; j < nums.size(); j++) {
                if(nums[i] == nums[j]) {
                    count++;
                }
            }
        }
        return count;
    }
};

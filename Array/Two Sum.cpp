class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int p = target;
        vector<int> v(2);
        for(int i = 0; i < nums.size() - 1; i++) {
            p = p - nums[i];
            for(int j = i + 1; j < nums.size(); j++) {
                if(nums[j] == p) {
                    v[0] = i;
                    v[1] = j;
                }
            }
            p = target;
        }
        return v;
    }
};

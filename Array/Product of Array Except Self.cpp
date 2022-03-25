// LeetCode

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int length = nums.size();
        int product = 1;
        int multiply = 1;
        vector<int> vec(length, 0);
        int count = 0, index = 0, zero_index = 0;
        for(int i = 0; i < length; i++) {
            if(nums[i] == 0) {
                count++;
            }
            if(count == 2) {
                index = 1;
                break;
            }
        }
        if(index == 1) {
            return vec;
        }
        else if(count == 1) {
            for(int i = 0; i < length; i++) {
                if(nums[i] == 0) {
                    zero_index = i;
                    continue;
                }
                else {
                    product *= nums[i];
                }
                
            }
            for(int i = 0; i < length; i++) {
                if(i != zero_index) {
                    vec[i] = 0;
                }
                else {
                    vec[i] = product;
                }
            }
        }
        else {
            for(int i = 0; i < length; i++) {
                multiply *= nums[i];
            }
            for(int i = 0; i < length; i++) {
                vec[i] = multiply / nums[i];
            }
        }
        return vec;
    }
};

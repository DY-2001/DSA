//LeetCode

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int low_index = -1, high_index = -1, length = nums.size();
        vector<int> vec(length);
        
        for(int i = 0; i < length; i++) {
            vec[i] = nums[i];
        }
        sort(vec.begin(), vec.end());
        
        for(int i = 0; i < length; i++) {
            if(vec[i] != nums[i]) {
                low_index = i;
                break;
            }
        }
        
        for(int i = length - 1; i >= 0; i--) {
            if(vec[i] != nums[i]) {
                high_index = i;
                break;
            }
        }
        
        if(high_index == -1 && low_index == -1) {
            return 0;
        }
        else {
            return high_index - low_index + 1;
        }
        
    }
};

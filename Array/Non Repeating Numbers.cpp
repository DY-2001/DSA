class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        int xor;
        vector<int> result;
        for(int i = 0; i < nums.size(); i++) {
            xor = xor ^ nums[i];
        }
        return result;
    }
};

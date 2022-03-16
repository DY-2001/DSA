//LeetCode

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<int> v;
        vector<vector<int>> vec;
        int diff = 0, min_diff = INT_MAX;
        sort(arr.begin(), arr.end());
       
        for(int i = 0; i < arr.size() - 1; i++) {
            diff = abs(arr[i] - arr[i + 1]); 
            if(min_diff > diff) {
                min_diff = diff;
            }
        }
        
        for(int i = 0; i < arr.size() - 1; i++) { 
            if(min_diff == abs(arr[i] - arr[i + 1])) {
                v.push_back(arr[i]);
                v.push_back(arr[i + 1]);
                vec.push_back(v);
                v.clear();
            }
        }
        return vec;
    }
};

//LeetCode
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int j, t, p;
        vector<vector<int>> v;
        vector<int> tmp;
        vector<int> vec(numRows);
        for(int i = 0; i < numRows; i++) {
            tmp.push_back(1);
            for(j = 1; j < i; j++) {
                if(i > 1) {
                     tmp.push_back(vec[j - 1] + vec[j]);
                }
            }
            if(i != 0) {
                tmp.push_back(1);
            }
            v.push_back(tmp); 
            vec = tmp;
            tmp.clear();
        }
        return v;
    }
};

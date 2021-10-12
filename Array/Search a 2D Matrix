// LeetCode

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int first, last;
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i = 0; i < m; i++) {
            first = matrix[i][0];
            last = matrix[i][n - 1];
            if(target >= first && target <= last) {
                for(int j = 0; j < n; j++) {
                    if(target == matrix[i][j]) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};

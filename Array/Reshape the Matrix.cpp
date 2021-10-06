//LeetCode
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row = mat.size();
        int column = mat[0].size();
        vector<vector<int>> vec(r, vector<int>(c));
        int t = row * column;
        vector<int> v(t);
        int p = 0, q = 0;

        if(r * c == row * column){
            for(int i = 0; i < mat.size(); i++) {
                for(int j = 0; j < mat[i].size(); j++) {
                    v[p++] = mat[i][j];
                }
            }
            for(int i = 0; i < r; i++) {
                for(int j = 0; j < c; j++) {
                    vec[i][j] = (v[q++]);
                }
            }
        }
        else {
            return mat;
        }
        return vec;
    }
};
